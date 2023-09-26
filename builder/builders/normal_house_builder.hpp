#ifndef DESIGN_PATTERNS_BUILDER_BUILDERS_NORMAL_HOUSE_BUILDER_HPP
#define DESIGN_PATTERNS_BUILDER_BUILDERS_NORMAL_HOUSE_BUILDER_HPP

#include "house_builder.hpp"

class NormalHouseBuilder : public HouseBuilder {
public:
    void buildWalls() override;
    void buildDoors() override;
    void buildWindows() override;
    void buildRoof() override;
    House& getHouse() override;

private:
    House house_;
}; // class NormalHouseBuilder

#endif // DESIGN_PATTERNS_BUILDER_BUILDERS_NORMAL_HOUSE_BUILDER_HPP