#ifndef DESIGN_PATTERNS_DECORATOR_NOTIFIER_HPP
#define DESIGN_PATTERNS_DECORATOR_NOTIFIER_HPP

#include <memory> // std::unique_ptr
#include <string>

class Notifier {
public:
    virtual void sendMessage();
    void setMessage(const std::string&);

private:
    std::string notification_;
}; // class Notifier

using NotifierPtr = std::unique_ptr<Notifier>;

#endif // DESIGN_PATTERNS_DECORATOR_NOTIFIER_HPP