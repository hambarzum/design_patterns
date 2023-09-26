#include <iostream>

#include "singleton.hpp"

Singleton* Singleton::instance_ = nullptr;

Singleton& Singleton::getInstance() {
    if(!instance_) {
        instance_ = new Singleton;
    }

    return *instance_;
}

void Singleton::log() {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}