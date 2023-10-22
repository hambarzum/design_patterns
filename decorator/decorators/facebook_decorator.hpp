#ifndef DESIGN_PATTERNS_DECORATOR_DECORATORS_FACEBOOK_DECORATOR_HPP
#define DESIGN_PATTERNS_DECORATOR_DECORATORS_FACEBOOK_DECORATOR_HPP

#include "base_decorator.hpp"

class FacebookDecorator : public BaseDecorator {
public:
    FacebookDecorator(NotifierPtr);
    void sendMessage() override;

private:
    void sendFacebookNotif();
}; // class FacebookDecorator

#endif // DESIGN_PATTERNS_DECORATOR_DECORATORS_FACEBOOK_DECORATOR_HPP