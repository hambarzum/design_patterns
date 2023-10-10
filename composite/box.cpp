#include <iterator> // std::next
#include <numeric> // std::accumulate

#include "box.hpp"

void Box::addComponent(IComponentPtr comp) {
    components_.push_back(std::move(comp));
}

void Box::removeComponent(int i) {
    components_.erase(std::next(components_.begin(), i));
}

int Box::getPrice() {
    return std::accumulate(components_.cbegin(), components_.cend(), 0, 
        [](auto sum, auto& i) {
            return sum + i->getPrice();
        }
    );
}