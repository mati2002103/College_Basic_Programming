#include "stack.hpp"

Stack::Stack(){}    
Stack::Stack(const Stack &s) {
    top = nullptr;
    if (s.top != nullptr) {
        Node* temp = s.top;
        Node* new_top = new Node{temp->value, nullptr};
        top = new_top;

        Node* current = top;
        temp = temp->next;

        while (temp != nullptr) {
            current->next = new Node{temp->value, nullptr};
            current = current->next;
            temp = temp->next;
        }
    }

}
Stack& Stack::operator=(const Stack &s){
   if (this == &s) {
        return *this; 
    }
 
    if (s.top != nullptr) {
        Node* temp = s.top;
        Node* new_top = new Node{temp->value, nullptr};
        top = new_top;

        Node* current = top;
        temp = temp->next;

        while (temp != nullptr) {
            current->next = new Node{temp->value, nullptr};
            current = current->next;
            temp = temp->next;
        }
    }

    return *this;
}


Stack::~Stack(){
    while(!empty()){
        pop();
    }

}
void Stack::push(double value){
    Node *temp = new Node();
    temp->value = value;
    temp->next = top;
    top = temp;
}
double Stack::pop(){
    if(!this->empty()){
       double valueToRet= top->value;
        Node *temp = top;
        top = temp->next;
        delete temp;
        temp=nullptr;
        return valueToRet;
    }
    
}
bool Stack::empty(){
    return top == nullptr;

}




