#ifndef DESIGN_PATTERNS_ABSTRACT_FACTORY_WIDGETS_QT_SCROLL_HPP
#define DESIGN_PATTERNS_ABSTRACT_FACTORY_WIDGETS_QT_SCROLL_HPP

#include "../scroll_widget.hpp"

class QTScroll : public IScrollWidget {
public:
    void scroll() override;
}; // class QTScroll

#endif // DESIGN_PATTERNS_ABSTRACT_FACTORY_WIDGETS_QT_SCROLL_HPP