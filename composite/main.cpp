#include <iostream>

#include "box.hpp"
#include "item.hpp"
#include "component.hpp"

int main() {
    BoxPtr box = std::make_unique<Box>();
    box->addComponent(std::make_unique<Item>(100));
    box->addComponent(std::make_unique<Item>(300));
    std::cout << box->getPrice() << std::endl;

    BoxPtr box2 = std::make_unique<Box>();
    box2->addComponent(std::move(box));
    box2->addComponent(std::make_unique<Item>(300));
    std::cout << box2->getPrice() << std::endl;

    box2->removeComponent(1);
    std::cout << box2->getPrice() << std::endl;
}