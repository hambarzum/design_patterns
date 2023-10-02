#ifndef DESIGN_PATTERNS_FACTORY_LOGISTICS_LOGISTICS_HPP
#define DESIGN_PATTERNS_FACTORY_LOGISTICS_LOGISTICS_HPP

#include <memory> // std::unique_ptr

#include "../transports/transport.hpp"

class Logistics {
public:
    void planDelivery();
    virtual ITransportPtr createTransport() = 0;

    virtual ~Logistics() = default;
}; // class Logistics

using LogisticsPtr = std::unique_ptr<Logistics>;

#endif // DESIGN_PATTERNS_FACTORY_LOGISTICS_LOGISTICS_HPP