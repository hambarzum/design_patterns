#include "stack.hpp"

void Stack::push(int value) {
    adaptee_.push_back(value);
}

void Stack::pop() {
    adaptee_.pop_back();
}

int Stack::top() {
    return adaptee_.back();
}

bool Stack::isEmpty() {
    return adaptee_.empty();
}