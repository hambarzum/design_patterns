#ifndef DESIGN_PATTERNS_FACTORY_TRANSPORTS_TRUCK_HPP
#define DESIGN_PATTERNS_FACTORY_TRANSPORTS_TRUCK_HPP

#include "transport.hpp"

class Truck : public ITransport {
public:
    void deliver() override;
};

#endif // DESIGN_PATTERNS_FACTORY_TRANSPORTS_TRUCK_HPP