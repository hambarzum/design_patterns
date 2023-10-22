#ifndef DESIGN_PATTERNS_DECORATOR_BASE_DECORATOR_HPP
#define DESIGN_PATTERNS_DECORATOR_BASE_DECORATOR_HPP

#include <memory> // std::unique_ptr

#include "../notifier.hpp"

class BaseDecorator : public Notifier {
public:
    BaseDecorator(NotifierPtr);
    void sendMessage();

private:
    NotifierPtr notifier_;
}; // class BaseDecorator

using BaseDecoratorPtr = std::unique_ptr<BaseDecorator>;

#endif // DESIGN_PATTERNS_DECORATOR_BASE_DECORATOR_HPP