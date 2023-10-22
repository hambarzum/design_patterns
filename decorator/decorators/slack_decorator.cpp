#include <iostream>

#include "slack_decorator.hpp"

SlackDecorator::SlackDecorator(NotifierPtr notifier)
    : BaseDecorator(std::move(notifier))
{

}

void SlackDecorator::sendMessage() {
    BaseDecorator::sendMessage();
    sendSlackNotif();
}

void SlackDecorator::sendSlackNotif() {
    std::cout << "notified via Slack" << std::endl;
}