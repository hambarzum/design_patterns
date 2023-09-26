#ifndef DESIGN_PATTERNS_BUILDER_BUILDERS_MANSION_BUILDER_HPP
#define DESIGN_PATTERNS_BUILDER_BUILDERS_MANSION_BUILDER_HPP

#include "house_builder.hpp"

class MansionBuilder : public HouseBuilder {
public:
    void buildWalls() override;
    void buildDoors() override;
    void buildWindows() override;
    void buildRoof() override;
    void buildPool() override;
    void buildGarden() override;
    House& getHouse() override;

private:
    House house_;
}; // class MansionBuilder

#endif // DESIGN_PATTERNS_BUILDER_BUILDERS_MANSION_BUILDER_HPP