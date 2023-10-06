#include <iostream>
#include <stdexcept>

#include "gadget_manager.hpp"
#include "gadgets/smartphone.hpp"
#include "gadgets/laptop.hpp"

GadgetRegistry GadgetManager::registry_;

void GadgetManager::initializePrototypes() {
    registry_[GadgetType::SMARTPHONE] = std::make_unique<Smartphone>();
    registry_[GadgetType::LAPTOP] = std::make_unique<Laptop>();
}

GadgetPtr GadgetManager::createGadget(GadgetType type) {
    auto iter = registry_.find(type);

    if(iter == registry_.end()) {
        throw std::runtime_error("no such gadget found");
    }

    return iter->second->clone();
}