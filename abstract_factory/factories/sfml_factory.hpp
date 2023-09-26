#ifndef DESIGN_PATTERNS_ABSTRACT_FACTORY_FACTORIES_SFML_FACTORY_HPP
#define DESIGN_PATTERNS_ABSTRACT_FACTORY_FACTORIES_SFML_FACTORY_HPP

#include "widget_factory.hpp"

class SFMLFactory : public WidgetFactory {
public:
    ButtonWidgetPtr makeButton() override;
    ScrollWidgetPtr makeScroll() override;
}; // class SFMLFactory

#endif // DESIGN_PATTERNS_ABSTRACT_FACTORY_FACTORIES_SFML_FACTORY_HPP