#include <string>
#include <iostream>
#include <vector>

class Widget {
private:
    std::vector<Widget*> activeWindow;
    std::string widgetName;

public:
    Widget(const std::string& widgetName) : widgetName(widgetName) {};
    ~Widget();
    void add(Widget* widgetADD);
    void print(const std::string& prefix = "") const;
};

class Button : public Widget {
public:
    Button(const std::string& widgetName) : Widget(widgetName) {};
};

class Edit : public Widget {
public:
    Edit(const std::string& widgetName) : Widget(widgetName) {};
};

Widget::~Widget() {
    for (Widget* widget : activeWindow) {
        delete widget;
    }
}

void Widget::add(Widget* widgetADD) {
    activeWindow.push_back(widgetADD);
}

void Widget::print(const std::string& prefix) const {
    std::cout << prefix << widgetName << std::endl;
    for (auto child : activeWindow) {
        child->print(prefix + widgetName + " ");
    }
}

int main() {
    Button* yes = new Button("yes");
    Button* no = new Button("no");
    Widget* panel = new Widget("panel");
    panel->add(yes);
    panel->add(no);

    Edit* edit = new Edit("edit");
    Widget* window = new Widget("window");
    window->add(panel);
    window->add(edit);

    window->print();

    delete window;
    return 0;
}
