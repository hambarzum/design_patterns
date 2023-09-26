#ifndef DESIGN_PATTERNS_SINGLETON_SINGLETON_HPP
#define DESIGN_PATTERNS_SINGLETON_SINGLETON_HPP

#include <memory> // std::unique_ptr

class Singleton {
public:
    static Singleton& getInstance();
    void log();

public:
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

private:
    Singleton() = default;

private:
    static Singleton* instance_;
}; // class Singleton

#endif // DESIGN_PATTERNS_SINGLETON_SINGLETON_HPP