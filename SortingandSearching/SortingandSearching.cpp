#include <iostream>
#include "Sorting.h"
#include "Searching.h"

int main() {
    Sorting sorter;
    Searching searcher;

    std::vector<int> input = { 4, 4, 1, 2, 2, 3, 3, 3 };
    int target = 2;

    std::vector<int> sortedArray = sorter.frequencySort(input);

    std::cout << "Sorted Array: ";
    for (int num : sortedArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    bool found = searcher.binarySearch(sortedArray, target);
    std::cout << "Search Result for " << target << ": " << (found ? "true" : "false") << std::endl;

    return 0;
}
