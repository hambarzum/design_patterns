#ifndef DESIGN_PATTERNS_BUILDER_CONTRACTOR_CONTRACTOR_HPP
#define DESIGN_PATTERNS_BUILDER_CONTRACTOR_CONTRACTOR_HPP

#include "../builders/house_builder.hpp"

class Contractor {
public:
    Contractor(const HouseBuilderPtr&);
    void changeHouseBuilder(const HouseBuilderPtr&);
    void buildHouse();

private:
    HouseBuilderPtr builder_;
}; // class Contractor

#endif // DESIGN_PATTERNS_BUILDER_CONTRACTOR_CONTRACTOR_HPP