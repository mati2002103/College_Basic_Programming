#include <iostream>
#include <stdexcept>
#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> elements;

public:
    Stack() {}

    ~Stack() {
        elements.clear();
    }

    bool empty() const {
        return elements.empty();
    }

    void push(const T& element) {
        elements.push_back(element);
    }

    T pop() {
        if (empty()) {
            throw std::out_of_range("Stack is empty");
        }

        T topElement = elements.back();
        elements.pop_back();
        return topElement;
    }
};

int main() {
    Stack<std::string> stack;
    std::string str;

    while (std::cin >> str) {
        stack.push(str);
    }

    while (!stack.empty()) {
        std::cout << stack.pop() << " ";
    }

    std::cout << std::endl;

    return 0;
}
