#include "logistics.hpp"

void Logistics::planDelivery() {
    ITransportPtr transport = createTransport();
    transport->deliver();
}