#ifndef DESIGN_PATTERNS_FACTORY_LOGISTICS_ROAD_LOGISTICS_HPP
#define DESIGN_PATTERNS_FACTORY_LOGISTICS_ROAD_LOGISTICS_HPP

#include "logistics.hpp"

class RoadLogistics : public Logistics {
public:
    ITransportPtr createTransport() override;
}; // class RoadLogistics

#endif // DESIGN_PATTERNS_FACTORY_LOGISTICS_ROAD_LOGISTICS_HPP