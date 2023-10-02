#ifndef DESIGN_PATTERNS_ABSTRACT_FACTORY_SCROLL_WIDGET_HPP
#define DESIGN_PATTERNS_ABSTRACT_FACTORY_SCROLL_WIDGET_HPP

#include <memory> // std::unique_ptr

class IScrollWidget {
public:
    virtual void scroll() = 0;
    virtual ~IScrollWidget() = default;
}; // class ScrollWidget

using IScrollWidgetPtr = std::unique_ptr<IScrollWidget>;

#endif // DESIGN_PATTERNS_ABSTRACT_FACTORY_SCROLL_WIDGET_HPP