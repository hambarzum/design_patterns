#ifndef DESIGN_PATTERNS_ABSTRACT_FACTORY_FACTORIES_QT_FACTORY_HPP
#define DESIGN_PATTERNS_ABSTRACT_FACTORY_FACTORIES_QT_FACTORY_HPP

#include "widget_factory.hpp"

class QTFactory : public IWidgetFactory {
public:
    IButtonWidgetPtr makeButton() override;
    IScrollWidgetPtr makeScroll() override;
}; // class QTFactory

#endif // DESIGN_PATTERNS_ABSTRACT_FACTORY_FACTORIES_QT_FACTORY_HPP