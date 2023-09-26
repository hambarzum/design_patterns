#include <iostream>

#include "mansion_builder.hpp"

void MansionBuilder::buildWalls() {
    house_.walls_ = true;
    std::cout << "mansion walls built" << std::endl;
} 

void MansionBuilder::buildDoors() {
    house_.doors_ = true;
    std::cout << "mansion doors built" << std::endl;
} 

void MansionBuilder::buildWindows() {
    house_.windows_ = true;
    std::cout << "mansion windows built" << std::endl;
}

void MansionBuilder::buildRoof() {
    house_.roof_ = true;
    std::cout << "mansion roof built" << std::endl;
} 

void MansionBuilder::buildPool() {
    house_.pool_ = true;
    std::cout << "mansion pool built" << std::endl; 
}

void MansionBuilder::buildGarden() {
    house_.garden_ = true;
    std::cout << "mansion garden built" << std::endl;
}

House& MansionBuilder::getHouse() {
    std::cout << "here's your mansion" << std::endl;
    return house_;
}