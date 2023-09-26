#include <iostream>

#include "qt_factory.hpp"
#include "../widgets/qt_widgets/qt_button.hpp"
#include "../widgets/qt_widgets/qt_scroll.hpp"

ButtonWidgetPtr QTFactory::makeButton() {
    std::cout << "QT Button made" << std::endl;
    return std::make_unique<QTButton>();
}

ScrollWidgetPtr QTFactory::makeScroll() {
    std::cout << "QT Scroll made" << std::endl;
    return std::make_unique<QTScroll>();
}