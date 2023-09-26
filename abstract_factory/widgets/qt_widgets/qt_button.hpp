#ifndef DESIGN_PATTERNS_ABSTRACT_FACTORY_WIDGETS_QT_BUTTON_HPP
#define DESIGN_PATTERNS_ABSTRACT_FACTORY_WIDGETS_QT_BUTTON_HPP

#include "../button_widget.hpp"

class QTButton : public IButtonWidget {
public:
    void click() override;
}; // class QTButton

#endif // DESIGN_PATTERNS_ABSTRACT_FACTORY_WIDGETS_QT_BUTTON_HPP