#include <iostream>

#include "singleton.hpp"

int main() {

    Singleton::getInstance().log();

    return 0;
}