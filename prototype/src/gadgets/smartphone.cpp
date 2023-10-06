#include <iostream>

#include "smartphone.hpp"

Smartphone::Smartphone() 
    : size_({8.0, 3.5, 0.5})
{

}

GadgetPtr Smartphone::clone() {
    std::cout << "smartphone created" << std::endl;
    return std::make_unique<Smartphone>(*this);
}

void Smartphone::setSize(Size size) {
    size_ = size;
    std::cout << "smartphone size set to {" << size_.height << " " << size_.width << " " << size_.thickness << "}" << std::endl;
}

Size Smartphone::getSize() const {
    return size_;
}