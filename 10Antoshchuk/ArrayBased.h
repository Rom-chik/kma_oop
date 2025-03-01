#pragma once // developed by Roman Antoshchuk on 09.04.2024
#include <iostream>
#include <stdexcept>
#include "IQueue.h"

template<typename T>
class ArrayBasedQueue : public IQueue<T> {
private:
    T* data;
    size_t capacity_;
    size_t head;
    size_t tail;
    size_t count;

public:
    ArrayBasedQueue(size_t capacity) : data(new T[capacity]), capacity_(capacity), head(0), tail(0), count(0) {}

    ~ArrayBasedQueue() {
        delete[] data;
    }

    bool empty() const override {
        return count == 0;
    }

    bool full() const override {
        return count == capacity_;
    }

    const T& front() const override {
        if (empty()) {
            throw std::runtime_error("Queue is empty");
        }
        return data[head];
    }

    void pop() override {
        if (empty()) {
            throw std::runtime_error("Queue is empty");
        }
        head = (head + 1) % capacity_;
        --count;
    }

    void put(const T& value) override {
        if (full()) {
            throw std::runtime_error("Queue is full");
        }
        data[tail] = value;
        tail = (tail + 1) % capacity_;
        ++count;
    }

    size_t capacity() const override {
        return capacity_;
    }

    size_t size() const override {
        return count;
    }
};