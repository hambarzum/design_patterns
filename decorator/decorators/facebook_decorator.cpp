#include <iostream>

#include "facebook_decorator.hpp"

FacebookDecorator::FacebookDecorator(NotifierPtr notifier)
    : BaseDecorator(std::move(notifier))
{

}

void FacebookDecorator::sendMessage() {
    BaseDecorator::sendMessage();
    sendFacebookNotif();
}

void FacebookDecorator::sendFacebookNotif() {
    std::cout << "notified via Facebook" << std::endl;
}