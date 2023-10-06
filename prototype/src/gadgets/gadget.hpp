#ifndef DESIGN_PATTERNS_PROTOTYPE_SRC_GADGETS_GADGET_HPP
#define DESIGN_PATTERNS_PROTOTYPE_SRC_GADGETS_GADGET_HPP

#include <memory> // std::unique_ptr

struct Size {
    double height;
    double width;
    double thickness;
}; // struct Size

class Gadget;
using GadgetPtr = std::unique_ptr<Gadget>;

class Gadget {
public:
    virtual GadgetPtr clone() = 0;
    virtual void setSize(Size) = 0;;
    virtual Size getSize() const = 0;
}; // class Gadget

#endif // DESIGN_PATTERNS_PROTOTYPE_SRC_GADGETS_GADGET_HPP