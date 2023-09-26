#ifndef DESIGN_PATTERNS_BUILDER_BUILDERS_POOL_HOUSE_BUILDER_HPP
#define DESIGN_PATTERNS_BUILDER_BUILDERS_POOL_HOUSE_BUILDER_HPP

#include "house_builder.hpp"

class PoolHouseBuilder : public HouseBuilder {
public:
    void buildWalls() override;
    void buildDoors() override;
    void buildWindows() override;
    void buildRoof() override;
    void buildPool() override;
    House& getHouse() override;

private:
    House house_;
}; // class PoolHouseBuilder

#endif // DESIGN_PATTERNS_BUILDER_BUILDERS_POOL_HOUSE_BUILDER_HPP