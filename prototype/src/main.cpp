#include <iostream>

#include "gadget_manager.hpp"

int main() {
    GadgetManager manager;
    manager.initializePrototypes();

    const auto laptop = manager.createGadget(GadgetType::LAPTOP);
    laptop->setSize({20, 35, 1.5});
    
    const auto smartphone = manager.createGadget(GadgetType::SMARTPHONE);
    laptop->setSize({10, 7.5, 1});
}