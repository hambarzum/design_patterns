#ifndef DESIGN_PATTERNS_COMPOSITE_ITEM_HPP
#define DESIGN_PATTERNS_COMPOSITE_ITEM_HPP

#include "component.hpp"

class Item : public IComponent {
public:
    Item(int price);
    int getPrice() override;

private:
    int price_;
}; // class Item

#endif // DESIGN_PATTERNS_COMPOSITE_ITEM_HPP