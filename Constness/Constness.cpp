#include <iostream>
#include "myConst.h"

int main() {
    myConst myList;

    // Adding numbers to the list
    myList.addNumber(5);
    myList.addNumber(10);
    myList.addNumber(15);

    // Getting the sum
    int sum = myList.getSum();
    std::cout << "Sum of numbers: " << sum << std::endl;

    // Getting the numbers
    std::vector<int> numbers = myList.getNumbers();
    std::cout << "Numbers in the list: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
