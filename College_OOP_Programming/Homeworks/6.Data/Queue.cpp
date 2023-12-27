#include <iostream>

class Queue {
private:
    struct Node {
        double value;
        Node* next;
    };
    Node* top = nullptr;

public:
    Queue() {}
    ~Queue();
    Queue(const Queue& Q);
    Queue& operator=(const Queue& Q);
    bool empty() const;
    Queue& push(double value);
    double pop();
};

Queue::Queue(const Queue& Q) : top(nullptr) {
    Node* temp = Q.top;
    while (temp != nullptr) {
        push(temp->value);
        temp = temp->next;
    }
}

Queue& Queue::operator=(const Queue& Q) {
    if (this != &Q) {
        while (!empty()) {
            pop();
        }

        Node* temp = Q.top;
        while (temp != nullptr) {
            push(temp->value);
            temp = temp->next;
        }
    }
    return *this;
}

Queue::~Queue() {
    while (!empty()) {
        pop();
    }
}

bool Queue::empty() const {
    return top == nullptr;
}

Queue& Queue::push(double value) {
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = nullptr;

    if (empty()) {
        top = newNode;
    } else {
        Node* temp = top;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    return *this;
}

double Queue::pop() {
    if (!empty()) {
        double valueToRet = top->value;
        Node* temp = top;
        top = temp->next;
        delete temp;
        return valueToRet;
    } 
}

int main() {
    Queue queue1, queue2;
    queue1.push(1.2);
    (queue2 = queue1).push(2.3);
    Queue queue3 = Queue(queue2).push(3.4);

    while (!queue1.empty()) {
        std::cout << queue1.pop() << " ";
    }
    std::cout << std::endl;

    while (!queue2.empty()) {
        std::cout << queue2.pop() << " ";
    }
    std::cout << std::endl;

    while (!queue3.empty()) {
        std::cout << queue3.pop() << " ";
    }
    std::cout << std::endl;

    return 0;
}
