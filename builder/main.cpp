#include "builders/mansion_builder.hpp"
#include "builders/normal_house_builder.hpp"
#include "builders/pool_house_builder.hpp"
#include "contractor/contractor.hpp"

int main() {

    // build a normal house
    HouseBuilderPtr builder = std::make_shared<NormalHouseBuilder>();
    Contractor contractor(builder); // possible to use unique_ptr? it's non-copyable
    contractor.buildHouse();
    auto house = builder->getHouse();


    // build a pool house
    builder = std::make_shared<PoolHouseBuilder>();
    contractor.changeHouseBuilder(builder);
    contractor.buildHouse();
    house = builder->getHouse();

    // build a mansion
    builder = std::make_shared<MansionBuilder>();
    contractor.changeHouseBuilder(builder);
    contractor.buildHouse();
    house = builder->getHouse();
}