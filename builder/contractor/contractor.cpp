#include "contractor.hpp"

Contractor::Contractor(const HouseBuilderPtr& builder) 
    : builder_(builder)
{

}

void Contractor::changeHouseBuilder(const HouseBuilderPtr& builder) {
    builder_ = builder;
}

void Contractor::buildHouse() {
    builder_->buildWalls();
    builder_->buildDoors();
    builder_->buildWindows();
    builder_->buildRoof();
    builder_->buildPool();
    builder_->buildGarden();
}