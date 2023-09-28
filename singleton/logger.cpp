#include <chrono>
#include <ctime>
#include <iostream>

#include "logger.hpp"

std::mutex Logger::mutex_;

void Logger::debug(std::string msg) {
    getInstance().logImpl(msg, "DEBUG", LogPriority::DEBUG);
} 

void Logger::info(std::string msg) {
    getInstance().logImpl(msg, "INFO", LogPriority::INFO);
} 

void Logger::warn(std::string msg) {
    getInstance().logImpl(msg, "WARNING", LogPriority::WARNING);
}

void Logger::error(std::string msg) {
    getInstance().logImpl(msg, "ERROR", LogPriority::ERROR);
}

void Logger::critical(std::string msg) {
    getInstance().logImpl(msg, "CRITICAL", LogPriority::CRITICAL);
} 

void Logger::setPriority(LogPriority newPriority) {
    getInstance().priority_ = newPriority;
}

void Logger::logImpl(std::string msg, std::string priorityString, LogPriority priority) {
    if(priority_ <= priority) {
        std::lock_guard<std::mutex> lock(mutex_);
        const auto time = getTimestamp();
        std::cout << "[" << time << "] [" << priorityString << "] " << msg << std::endl;
    }
}

std::string Logger::getTimestamp() {
    // Get the current time using std::chrono::system_clock
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();

    // Convert the current time to a time_t object
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);

    // Convert the time_t object to a string
    std::string timeString = std::ctime(&currentTime);

    // Remove the newline character at the end of the string
    timeString.erase(timeString.length() - 1);

    return timeString;
}

Logger& Logger::getInstance() {
    static Logger instance;
    return instance;
}