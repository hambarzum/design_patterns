#ifndef DESIGN_PATTERNS_DECORATOR_DECORATORS_SLACK_DECORATOR_HPP
#define DESIGN_PATTERNS_DECORATOR_DECORATORS_SLACK_DECORATOR_HPP

#include "base_decorator.hpp"

class SlackDecorator : public BaseDecorator {
public:
    SlackDecorator(NotifierPtr);
    void sendMessage() override;

private:
    void sendSlackNotif();
}; // class SlackDecorator

#endif // DESIGN_PATTERNS_DECORATOR_DECORATORS_SLACK_DECORATOR_HPP