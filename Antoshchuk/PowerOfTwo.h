#pragma once // developed by Roman Antoshchuk on 16.04.2024
// Task 1 - power of 2
template <int N>
struct PowerOfTwo {
    static const int value = 2 * PowerOfTwo<N - 1>::value;
};

template <>
struct PowerOfTwo<0> {
    static const int value = 1;
};