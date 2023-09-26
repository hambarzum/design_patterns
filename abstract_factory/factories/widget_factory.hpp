#ifndef DESIGN_PATTERNS_ABSTRACT_FACTORY_WIDGET_FACTORY_HPP
#define DESIGN_PATTERNS_ABSTRACT_FACTORY_WIDGET_FACTORY_HPP

#include <memory> // std::unique_ptr

#include "../widgets/button_widget.hpp"
#include "../widgets/scroll_widget.hpp"

class WidgetFactory {
public:
    virtual ButtonWidgetPtr makeButton() = 0;
    virtual ScrollWidgetPtr makeScroll() = 0;
};

using WidgetFactoryPtr = std::unique_ptr<WidgetFactory>;

#endif // DESIGN_PATTERNS_ABSTRACT_FACTORY_WIDGET_FACTORY_HPP