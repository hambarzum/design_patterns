#include "item.hpp"

Item::Item(int price) 
    : price_(price)
{

}

int Item::getPrice() {
    return price_;
}