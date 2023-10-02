#ifndef DESIGN_PATTERNS_ABSTRACT_FACTORY_WIDGET_FACTORY_HPP
#define DESIGN_PATTERNS_ABSTRACT_FACTORY_WIDGET_FACTORY_HPP

#include <memory> // std::unique_ptr

#include "../widgets/button_widget.hpp"
#include "../widgets/scroll_widget.hpp"

class IWidgetFactory {
public:
    virtual IButtonWidgetPtr makeButton() = 0;
    virtual IScrollWidgetPtr makeScroll() = 0;
    virtual ~IWidgetFactory() = default;
};

using IWidgetFactoryPtr = std::unique_ptr<IWidgetFactory>;

#endif // DESIGN_PATTERNS_ABSTRACT_FACTORY_WIDGET_FACTORY_HPP