#ifndef DESIGN_PATTERNS_ABSTRACT_FACTORY_BUTTON_WIDGET_HPP
#define DESIGN_PATTERNS_ABSTRACT_FACTORY_BUTTON_WIDGET_HPP

#include <memory> // std::unique_ptr

class IButtonWidget {
public:
    virtual void click() = 0; 
    virtual ~IButtonWidget() = default; 
}; // class ButtonWidget

using IButtonWidgetPtr = std::unique_ptr<IButtonWidget>;

#endif // DESIGN_PATTERNS_ABSTRACT_FACTORY_BUTTON_WIDGET_HPP