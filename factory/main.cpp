#include "logistics/logistics.hpp"
#include "logistics/road_logistics.hpp"
#include "logistics/sea_logistics.hpp"

int main() {
    LogisticsPtr logistics1 = std::make_unique<RoadLogistics>();
    logistics1->planDelivery();

    LogisticsPtr logistics2 = std::make_unique<SeaLogistics>();
    logistics2->planDelivery();
}