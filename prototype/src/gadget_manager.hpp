#ifndef DESIGN_PATTERNS_PROTOTYPE_SRC_GADGET_MANAGER_HPP
#define DESIGN_PATTERNS_PROTOTYPE_SRC_GADGET_MANAGER_HPP

#include <unordered_map>

#include "gadgets/gadget.hpp"

enum class GadgetType {
    SMARTPHONE,
    LAPTOP
}; // enum GadgetType

using GadgetRegistry = std::unordered_map<GadgetType, GadgetPtr>;

class GadgetManager {
public:
    static void initializePrototypes();
    GadgetPtr createGadget(GadgetType);

private:
    static GadgetRegistry registry_;
}; // class GadgetManager

#endif // DESIGN_PATTERNS_PROTOTYPE_SRC_GADGET_MANAGER_HPP