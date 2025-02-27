#pragma once // developed by Roman Antoshchuk on 17.04.2024
template<typename T>
class IDoubleList { // Task 2 - DoubleList interface
public:
    virtual ~IDoubleList() {}

    virtual size_t size() const = 0;

    virtual void pushFront(const T& value) = 0;

    virtual void pushBack(const T& value) = 0;

    virtual void popFront() = 0;

    virtual void popBack() = 0;

    virtual T front() const = 0;

    virtual T back() const = 0;

    virtual bool isEmpty() const = 0;

    virtual void clear() = 0;
};