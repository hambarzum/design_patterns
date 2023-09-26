#ifndef DESIGN_PATTERNS_ABSTRACT_FACTORY_WIDGETS_SFML_BUTTON_HPP
#define DESIGN_PATTERNS_ABSTRACT_FACTORY_WIDGETS_SFML_BUTTON_HPP

#include "../button_widget.hpp"

class SFMLButton : public IButtonWidget {
public:
    void click() override;
}; // class SFMLButton

#endif // DESIGN_PATTERNS_ABSTRACT_FACTORY_WIDGETS_SFML_BUTTON_HPP