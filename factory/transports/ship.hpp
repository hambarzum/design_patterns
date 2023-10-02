#ifndef DESIGN_PATTERNS_FACTORY_TRANSPORTS_SHIP_HPP
#define DESIGN_PATTERNS_FACTORY_TRANSPORTS_SHIP_HPP

#include "transport.hpp"

class Ship : public ITransport {
public:
    void deliver() override;
};

#endif // DESIGN_PATTERNS_FACTORY_TRANSPORTS_SHIP_HPP