#include <iostream>

#include "sfml_factory.hpp"
#include "../widgets/sfml_widgets/sfml_button.hpp"
#include "../widgets/sfml_widgets/sfml_scroll.hpp"

IButtonWidgetPtr SFMLFactory::makeButton() {
    std::cout << "SFML Button made" << std::endl;
    return std::make_unique<SFMLButton>();
}

IScrollWidgetPtr SFMLFactory::makeScroll() {
    std::cout << "SFML Scroll made" << std::endl;
    return std::make_unique<SFMLScroll>();
}