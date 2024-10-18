#include <iostream>
#include "Arrays.h"

int main()
{
    Arrays arrayProcessor;

    std::vector<std::string> input = { "apple", "banana", "kiwi", "grape" };
    std::vector<std::string> result = arrayProcessor.transformAndSort(input);

    std::cout << "Transformed and Sorted Strings:" << std::endl;
    for (const auto& str : result) {
        std::cout << str << std::endl;
    }

    return 0;
}
