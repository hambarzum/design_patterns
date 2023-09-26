#ifndef DESIGN_PATTERNS_ABSTRACT_FACTORY_BUTTON_WIDGET_HPP
#define DESIGN_PATTERNS_ABSTRACT_FACTORY_BUTTON_WIDGET_HPP

#include <memory> // std::unique_ptr

class ButtonWidget {
public:
    virtual void click() = 0; 
}; // class ButtonWidget

using ButtonWidgetPtr = std::unique_ptr<ButtonWidget>;

#endif // DESIGN_PATTERNS_ABSTRACT_FACTORY_BUTTON_WIDGET_HPP