
#include <iostream>
#include "myPointers.h"

int main() {
    int x = 5;
    int y = 10;

    std::cout << "Before swap (by reference): x = " << x << ", y = " << y << std::endl;
    swapByReference(x, y);
    std::cout << "After swap (by reference): x = " << x << ", y = " << y << std::endl;

    int a = 15;
    int b = 20;

    std::cout << "Before swap (by pointer): a = " << a << ", b = " << b << std::endl;
    swapByPointer(&a, &b);
    std::cout << "After swap (by pointer): a = " << a << ", b = " << b << std::endl;

    return 0;
}
