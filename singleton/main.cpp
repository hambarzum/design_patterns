#include <iostream>
#include <thread>

#include "logger.hpp"

int main() {

    std::thread threads[10];

    for(auto& t : threads) {
        t = std::thread([]() { 
            Logger::info("logging"); }
        );
    }

    
    for(auto& t : threads) {
        t.join();
    }


    Logger::debug("error log3 logged from the logger");
    Logger::info("info log1 logged from the logger");
    Logger::warn("warning log1 logged from the logger");
    
    Logger::setPriority(LogPriority::WARNING);

    Logger::info("info log2 logged from the logger");
    Logger::warn("warning log2 logged from the logger");
    Logger::error("error log2 logged from the logger");

    Logger::setPriority(LogPriority::ERROR);

    Logger::debug("debug log3 logged from the logger");
    Logger::info("info log3 logged from the logger");
    Logger::warn("warning log3 logged from the logger");
    Logger::error("error log3 logged from the logger");
    Logger::critical("critical log3 logged from the logger");




    return 0;
}