#pragma once // developed by Roman Antoshchuk on 18.04.2024
#include <string>
// Task 8 - ShortString
template <int n>
class ShortString {
private:
    char _string[n + 1];

public:
    ShortString() { //init
        _string[0] = '\0';
    }

    ShortString(const char* str) {
        if (std::strlen(str) > n) {
            throw std::length_error("String length over allowed.");
        }
        strcpy_s(_string, str);
    }

    const char* c_str() const {
        return _string;
    }

    size_t length() const {
        return std::strlen(_string);
    }

    char& operator[](size_t index) {
        if (index >= n) {
            throw std::out_of_range("Index out of range");
        }
        return _string[index];
    }

    const char& operator[](size_t index) const {
        if (index >= n) {
            throw std::out_of_range("Index out of range");
        }
        return _string[index];
    }

    ShortString& operator=(const char* str) {
        if (std::strlen(str) > n) {
            throw std::length_error("String length over allowed.");
        }
        std::strcpy(_string, str);
        return *this;
    }

    ShortString& operator=(const ShortString& other) {
        std::strcpy(_string, other._string);
        return *this;
    }

    bool operator==(const ShortString& other) const {
        return std::strcmp(_string, other._string) == 0;
    }

    bool operator!=(const ShortString& other) const {
        return !(*this == other);
    }

    // Task 9 - Concatenation
    ShortString& operator+=(const ShortString& other) {
        if (this->length() + other.length() > n) {
            throw std::length_error("String length over allowed.");
        }
        strcat_s(this->_string, other._string);
        return *this;
    }
    friend ShortString operator+(ShortString lhs, const ShortString& rhs) {
        lhs += rhs;
        return lhs;
    }

};
