#ifndef DESIGN_PATTERNS_FACTORY_LOGISTICS_SEA_LOGISTICS_HPP
#define DESIGN_PATTERNS_FACTORY_LOGISTICS_SEA_LOGISTICS_HPP

#include "logistics.hpp"

class SeaLogistics : public Logistics {
public:
    ITransportPtr createTransport() override;
}; // class SeaLogistics

#endif //  DESIGN_PATTERNS_FACTORY_LOGISTICS_SEA_LOGISTICS_HPP