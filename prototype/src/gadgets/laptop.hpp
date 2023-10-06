#ifndef DESIGN_PATTERNS_PROTOTYPE_SRC_GADGETS_LAPTOP_HPP
#define DESIGN_PATTERNS_PROTOTYPE_SRC_GADGETS_LAPTOP_HPP

#include "gadget.hpp"

class Laptop : public Gadget {
public:
    Laptop();
    GadgetPtr clone() override;
    void setSize(Size) override;
    Size getSize() const override;

private:
    Size size_;
    // .. more properties
}; // class Laptop

#endif // DESIGN_PATTERNS_PROTOTYPE_SRC_GADGETS_LAPTOP_HPP