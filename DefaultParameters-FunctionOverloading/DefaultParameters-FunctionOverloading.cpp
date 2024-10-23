#include <iostream>
#include <iomanip>

int sum(int a, int b=2) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

double sum(int a, double b) {
    return a + b;
}


int main()
{
    int a = 1, b = 1;
    double c = 1.0, d = 2.0;
    std::cout << std::fixed << std::setprecision(2);
    int result1 = sum(a);
    double result2 = sum(a, b);
    double result3 = sum(c, d);
    std::cout << result1 << std::endl;
    std::cout << result2 << std::endl;
    std::cout << result3 << std::endl;
}

