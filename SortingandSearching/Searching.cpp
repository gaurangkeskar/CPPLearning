#include "Searching.h"

bool Searching::binarySearch(const std::vector<int>& sortedArray, int target) {
    int left = 0;
    int right = sortedArray.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (sortedArray[mid] == target) {
            return true; // Found the target
        }
        else if (sortedArray[mid] < target) {
            left = mid + 1; // Search in the right half
        }
        else {
            right = mid - 1; // Search in the left half
        }
    }

    return false; // Target not found
}
