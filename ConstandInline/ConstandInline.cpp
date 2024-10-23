#include <iostream>
#include "myConstandmyInline.h"

int main() {
    Circle circle;
    double radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Validate the input
    if (radius < 0) {
        std::cout << "Radius cannot be negative." << std::endl;
        return 1; // Exit with error code
    }

    double area = circle.area(radius); // Call to the inline function
    std::cout << "The area of the circle with radius " << radius << " is " << area << "." << std::endl;

    return 0;
}
