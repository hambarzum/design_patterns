#ifndef DESIGN_PATTERNS_BUILDER_BUILDERS_HOUSE_BUILDER_HPP
#define DESIGN_PATTERNS_BUILDER_BUILDERS_HOUSE_BUILDER_HPP

#include <memory> // std::shared_ptr

#include "../houses/house.hpp"

class HouseBuilder {
public:
    virtual void buildWalls() {}
    virtual void buildDoors() {}
    virtual void buildWindows() {}
    virtual void buildRoof() {}
    virtual void buildPool() {}
    virtual void buildGarden() {}
    
    virtual House& getHouse() = 0;

    virtual ~HouseBuilder() = default;
}; // class HouseBuilder

using HouseBuilderPtr = std::shared_ptr<HouseBuilder>;

#endif // DESIGN_PATTERNS_BUILDER_BUILDERS_HOUSE_BUILDER_HPP