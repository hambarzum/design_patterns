#ifndef DESIGN_PATTERNS_COMPOSITE_COMPONENT_HPP
#define DESIGN_PATTERNS_COMPOSITE_COMPONENT_HPP

#include <memory> // std::unique_ptr

class IComponent {
public:
    virtual int getPrice() = 0;
}; // class IComponent

using IComponentPtr = std::unique_ptr<IComponent>;

#endif // DESIGN_PATTERNS_COMPOSITE_COMPONENT_HPP