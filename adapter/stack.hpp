#ifndef DESIGN_PATTERNS_ADAPTER_STACK_HPP
#define DESIGN_PATTERNS_ADAPTER_STACK_HPP

#include <list>

class Stack {
public:
    void push(int value);
    void pop();
    int top();
    bool isEmpty();

private:
    std::list<int> adaptee_;
}; // class Stack

#endif // DESIGN_PATTERNS_ADAPTER_STACK_HPP