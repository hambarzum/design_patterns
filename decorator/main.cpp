#include <memory> // std::unique_ptr

#include "notifier.hpp"
#include "decorators/base_decorator.hpp"
#include "decorators/facebook_decorator.hpp"
#include "decorators/slack_decorator.hpp"
#include "decorators/sms_decorator.hpp"

int main() {
    NotifierPtr notifier = std::make_unique<Notifier>();
    notifier->setMessage("3 new notifications");
    BaseDecoratorPtr decorator = std::make_unique<FacebookDecorator>(std::make_unique<SlackDecorator>(std::make_unique<SMSDecorator>(std::move(notifier)))); 
    decorator->sendMessage();
}