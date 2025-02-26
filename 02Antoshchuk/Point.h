#pragma once // developed by Roman Antoshchuk on 12.02.2024
#include <iostream>

class Point {
private:
    static int _freeID;
    int _pointID;
    double _x;
    double _y;

public:
    Point(double x = 0, double y = 0) {
        _pointID = _freeID++;
        _x = x;
        _y = y;
    };

    Point(const Point&);

    ~Point() {
    };

    Point& operator=(const Point &point) {
        if (this != &point) { 
            _x = point.x();
            _y = point.y();
            
        }
        return *this;
    };

    double& x() {
        return _x;
    };

    double& y() {
        return _y;
    };

    [[nodiscard]] const double& x() const {
        return _x;
    };

    [[nodiscard]] const double& y() const {
        return _y;
    };

    [[nodiscard]] const int getID() const {
        return _pointID;
    };

    static int amount() {
        return _freeID;
    };

};

int Point::_freeID = 0;

std::ostream& operator<<(std::ostream& os, const Point& point) {
    return os << " (" << point.x() << ", " << point.y() << ") ";
}

const Point operator+(const Point& u, const Point& v) {
    return Point(u.x() + v.x(), u.y() + v.y());
};

Point operator+=(Point& u, const Point& v) {
    u = u + v;
    return  u + v;
};

bool operator==(const Point& u, const Point& v) {
    if (u.x() == v.x() && u.y() == v.y()) {
        return true;
    }
    else {
        return false;
    }
};

bool operator!=(const Point& u, const Point& v) {
    if (u.x() != v.x() || u.y() != v.y()) {
        return true;
    }
    else {
        return false;
    }
};