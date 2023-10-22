#include "base_decorator.hpp"

BaseDecorator::BaseDecorator(NotifierPtr notifier)
    : notifier_(std::move(notifier))
{

}

void BaseDecorator::sendMessage() {
    notifier_->sendMessage();
}