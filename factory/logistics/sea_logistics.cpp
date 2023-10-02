#include <iostream>

#include "../transports/ship.hpp"
#include "sea_logistics.hpp"

ITransportPtr SeaLogistics::createTransport() {
    std::cout << "ship created" << std::endl;
    return std::make_unique<Ship>();
}