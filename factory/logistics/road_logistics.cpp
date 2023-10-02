#include <iostream>

#include "../transports/truck.hpp"
#include "road_logistics.hpp"

ITransportPtr RoadLogistics::createTransport() {
    std::cout << "truck created" << std::endl;
    return std::make_unique<Truck>();
}