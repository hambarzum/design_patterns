#include <iostream>

#include "notifier.hpp"

void Notifier::setMessage(const std::string& msg) {
    notification_ = msg;
}

void Notifier::sendMessage() {
    std::cout << notification_ << std::endl;
}