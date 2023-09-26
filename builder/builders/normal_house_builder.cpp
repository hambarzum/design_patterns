#include <iostream>

#include "normal_house_builder.hpp"

void NormalHouseBuilder::buildWalls() {
    house_.walls_ = true;
    std::cout << "normal house walls built" << std::endl;
} 

void NormalHouseBuilder::buildDoors() {
    house_.doors_ = true;
    std::cout << "normal house doors built" << std::endl;
} 

void NormalHouseBuilder::buildWindows() {
    house_.windows_ = true;
    std::cout << "normal house windows built" << std::endl;
}

void NormalHouseBuilder::buildRoof() {
    house_.roof_ = true;
    std::cout << "normal house roof built" << std::endl;
} 

House& NormalHouseBuilder::getHouse() {
    std::cout << "here's your normal house" << std::endl;
    return house_;
}