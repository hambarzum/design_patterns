#include <iostream>

#include "laptop.hpp"

Laptop::Laptop()
    : size_({15.0, 25.0, 1.5})
{

}

GadgetPtr Laptop::clone() {
    std::cout << "laptop created" << std::endl;
    return std::make_unique<Laptop>(*this);
}

void Laptop::setSize(Size size) {
    size_ = size;
    std::cout << "laptop size set to {" << size_.height << " " << size_.width << " " << size_.thickness << "}" << std::endl;
}

Size Laptop::getSize() const {
    return size_;
}