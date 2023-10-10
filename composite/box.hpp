#ifndef DESIGN_PATTERNS_COMPOSITE_BOX_HPP
#define DESIGN_PATTERNS_COMPOSITE_BOX_HPP

#include <memory> // std::unique_ptr
#include <vector>

#include "component.hpp"

class Box : public IComponent {
public:
    int getPrice() override;
    void addComponent(IComponentPtr);
    void removeComponent(int i);

private:
    std::vector<IComponentPtr> components_;
}; // class Box

using BoxPtr = std::unique_ptr<Box>;

#endif // DESIGN_PATTERNS_COMPOSITE_BOX_HPP