#include <string>
#include <iostream>
#include <vector>

class Widget{
    private:
    std::vector<Widget*> activeWindow;
    std::string widgetName;
    public:
        Widget(std::string widgetName): widgetName(widgetName){}; 
        ~Widget();
        void add(Widget* widgetName);
        void print()const;
};
class Button : public Widget{
    private:
    public:
        Button(const std::string& widgetName): Widget(widgetName){}; 

};
class Edit : public Widget{
    private:
    public:
        Edit(const std::string& widgetName): Widget(widgetName){}; 

};
Widget::~Widget(){
    for (Widget* widget : activeWindow) {
            delete widget;
        }
}
void Widget::add(Widget* widgetADD){
    activeWindow.push_back(widgetADD);
}
void Widget::print()const{
    std::cout << widgetName;

    for (const Widget* widgetChild : activeWindow) {
        std::cout << ' ';
        widgetChild->print();
    }

}

int main() {
Button *yes = new Button("yes");
Button *no = new Button("no");
Widget *panel = new Widget("panel");
panel->add(yes);
panel->add(no);
Edit *edit = new Edit("edit");
Widget *window = new Widget("window");
window->add(panel);
window->add(edit);
window->print();
delete window;
return 0;
}
