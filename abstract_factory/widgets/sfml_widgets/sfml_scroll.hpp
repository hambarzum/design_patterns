#ifndef DESIGN_PATTERNS_ABSTRACT_FACTORY_WIDGETS_SFML_SCROLL_HPP
#define DESIGN_PATTERNS_ABSTRACT_FACTORY_WIDGETS_SFML_SCROLL_HPP

#include "../scroll_widget.hpp"

class SFMLScroll : public ScrollWidget {
public:
    void scroll() override;
}; // class SFMLScroll

#endif // DESIGN_PATTERNS_ABSTRACT_FACTORY_WIDGETS_SFML_SCROLL_HPP