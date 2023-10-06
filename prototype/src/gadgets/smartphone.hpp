#ifndef DESIGN_PATTERNS_PROTOTYPE_SRC_GADGETS_SMARTPHONE_HPP
#define DESIGN_PATTERNS_PROTOTYPE_SRC_GADGETS_SMARTPHONE_HPP

#include "gadget.hpp"

class Smartphone : public Gadget {
public:
    Smartphone();
    GadgetPtr clone() override;
    void setSize(Size) override;
    Size getSize() const override;

private:
    Size size_;
    // ..other properties
}; // class Smartphone

#endif // DESIGN_PATTERNS_PROTOTYPE_SRC_GADGETS_SMARTPHONE_HPP