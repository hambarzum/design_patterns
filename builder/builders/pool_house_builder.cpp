#include <iostream>

#include "pool_house_builder.hpp"

void PoolHouseBuilder::buildWalls() {
    house_.walls_ = true;
    std::cout << "pool house walls built" << std::endl;
} 

void PoolHouseBuilder::buildDoors() {
    house_.doors_ = true;
    std::cout << "pool house doors built" << std::endl;
} 

void PoolHouseBuilder::buildWindows() {
    house_.windows_ = true;
    std::cout << "pool house windows built" << std::endl;
}

void PoolHouseBuilder::buildRoof() {
    house_.roof_ = true;
    std::cout << "pool house roof built" << std::endl;
} 

void PoolHouseBuilder::buildPool() {
    house_.pool_ = true;
    std::cout << "pool house pool built" << std::endl; 
}

House& PoolHouseBuilder::getHouse() {
    std::cout << "here's your pool house" << std::endl;
    return house_;
}