#include "myConst.h"
#include <numeric> // for std::accumulate

void myConst::addNumber(int number) {
    numbers.push_back(number);
}

int myConst::getSum() const {
    return std::accumulate(numbers.begin(), numbers.end(), 0);
}

std::vector<int> myConst::getNumbers() const {
    return numbers;
}
