#ifndef _STACK_HPP_
#define _STACK_HPP_

#include <iostream>

class Stack {

  public:
    Stack();
    Stack(const Stack &s);
    ~Stack();
    Stack& operator=(const Stack &s);

    bool empty();
    void push(double value);
    double pop();

  private:
    struct Node{
    double value;
    Node *next;
    };
    Node *top = nullptr;

};

#endif //_STACK_HPP_
