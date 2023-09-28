#ifndef DESIGN_PATTERNS_SONGLETON_LOGGER_HPP
#define DESIGN_PATTERNS_SONGLETON_LOGGER_HPP

#include <mutex>
#include <string>

enum class LogPriority {
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    CRITICAL
};


/// TODO: log to anything (maybe a file?)
class Logger {
public:
    static void debug(std::string msg);
    static void info(std::string msg);
    static void warn(std::string msg);
    static void error(std::string msg);
    static void critical(std::string msg);
    static void setPriority(LogPriority);

private:
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

private:
    Logger() = default;
    static Logger& getInstance();
    void logImpl(std::string msg, std::string priorityString, LogPriority priority);
    std::string getTimestamp();

private:
    LogPriority priority_ = LogPriority::DEBUG;
    static std::mutex mutex_;
}; // class Logger

#endif // DESIGN_PATTERNS_SONGLETON_LOGGER_HPP