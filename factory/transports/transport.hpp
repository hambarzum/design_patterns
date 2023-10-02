#ifndef DESIGN_PATTERNS_FACTORY_TRANSPORTS_TRANSPORT_HPP
#define DESIGN_PATTERNS_FACTORY_TRANSPORTS_TRANSPORT_HPP

#include <memory> // std::unique_ptr

class ITransport {
public:
    virtual void deliver() = 0;
    virtual ~ITransport() = default;
}; // class Itransport

using ITransportPtr = std::unique_ptr<ITransport>;

#endif // DESIGN_PATTERNS_FACTORY_TRANSPORTS_TRANSPORT_HPP