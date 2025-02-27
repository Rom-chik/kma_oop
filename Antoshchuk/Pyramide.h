#pragma once // developed by Roman Antoshchuk on 18.04.2024
// Task 6 - Pyramide
struct Point {
    double x, y, z;

    Point(double x = 0.0, double y = 0.0, double z = 0.0) : x(x), y(y), z(z) {}
};

struct Triangle {
    Point a, b, c;
    Triangle(const Point& a, const Point& b, const Point& c) : a(a), b(b), c(c) {}
};

struct Pyramide {
private:
    Point a, b, c, d;

public:
    Pyramide(const Point& a = Point(0, 0, 0), const Point& b = Point(1, 0, 0),
        const Point& c = Point(0, 1, 0), const Point& d = Point(0, 0, 1))
        : a(a), b(b), c(c), d(d) {}

    ~Pyramide() {}

    // Task 7 - Faces of pyramid
    Triangle getFace() const {
        return Triangle(a, b, c);
    }

    Triangle getFace1() const {
        return Triangle(a, b, d);
    }

    Triangle getFace2() const {
        return Triangle(a, c, d);
    }

    Triangle getFace3() const {
        return Triangle(b, c, d);
    }

    // sel
    const Point& get_a() const { return a; }
    const Point& get_b() const { return b; }
    const Point& get_c() const { return c; }
    const Point& get_d() const { return d; }
    // mod
    void set_a(const Point& newA) { a = newA; }
    void set_b(const Point& newB) { b = newB; }
    void set_c(const Point& newC) { c = newC; }
    void set_d(const Point& newD) { d = newD; }

};