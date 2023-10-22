#include <iostream>

#include "sms_decorator.hpp"

SMSDecorator::SMSDecorator(NotifierPtr notifier)
    : BaseDecorator(std::move(notifier))
{

}

void SMSDecorator::sendMessage() {
    BaseDecorator::sendMessage();
    sendSMS();
}

void SMSDecorator::sendSMS() {
    std::cout << "notified via SMS" << std::endl;
}