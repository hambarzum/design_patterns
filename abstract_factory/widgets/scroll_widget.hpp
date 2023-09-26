#ifndef DESIGN_PATTERNS_ABSTRACT_FACTORY_SCROLL_WIDGET_HPP
#define DESIGN_PATTERNS_ABSTRACT_FACTORY_SCROLL_WIDGET_HPP

#include <memory> // std::unique_ptr

class ScrollWidget {
public:
    virtual void scroll() = 0;
}; // class ScrollWidget

using ScrollWidgetPtr = std::unique_ptr<ScrollWidget>;

#endif // DESIGN_PATTERNS_ABSTRACT_FACTORY_SCROLL_WIDGET_HPP