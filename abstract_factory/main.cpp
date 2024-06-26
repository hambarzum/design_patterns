#include <iostream>

#include "factories/qt_factory.hpp"
#include "factories/sfml_factory.hpp"
#include "factories/widget_factory.hpp"

void useWidgets(IWidgetFactoryPtr factory) {
    auto button = factory->makeButton();
    button->click();

    auto scroll = factory->makeScroll();
    scroll->scroll();
}

int main() {
    // system configured with QT
    useWidgets(std::make_unique<QTFactory>());

    // system configured with SFML
    useWidgets(std::make_unique<SFMLFactory>());

    return 0;
}