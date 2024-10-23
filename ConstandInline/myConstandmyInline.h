#pragma once

class Circle {
public:
    static constexpr double PI = 3.14159; // Constant for Pi

    inline double area(double radius) const; // Inline function declaration
};
inline double Circle::area(double radius) const {
    return PI * radius * radius; // Area calculation
}
