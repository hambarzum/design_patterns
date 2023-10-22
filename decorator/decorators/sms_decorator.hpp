#ifndef DESIGN_PATTERNS_DECORATOR_DECORATORS_SMS_DECORATOR_HPP
#define DESIGN_PATTERNS_DECORATOR_DECORATORS_SMS_DECORATOR_HPP

#include "base_decorator.hpp"

class SMSDecorator : public BaseDecorator {
public:
    SMSDecorator(NotifierPtr);
    void sendMessage() override;

private:
    void sendSMS();
}; // class SMSDecorator

#endif // DESIGN_PATTERNS_DECORATOR_DECORATORS_SMS_DECORATOR_HPP