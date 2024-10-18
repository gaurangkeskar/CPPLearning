#include "Sorting.h"
#include <algorithm>
#include <unordered_map>

std::vector<int> Sorting::frequencySort(const std::vector<int>& input) {
    std::unordered_map<int, int> frequencyMap;

    // Count frequency of each number
    for (int num : input) {
        frequencyMap[num]++;
    }

    // Create a vector of pairs (number, frequency)
    std::vector<std::pair<int, int>> frequencyVec(frequencyMap.begin(), frequencyMap.end());

    // Sort by frequency (desc), then by number (asc)
    std::sort(frequencyVec.begin(), frequencyVec.end(), [](const auto& a, const auto& b) {
        if (a.second != b.second) {
            return a.second > b.second; // Higher frequency first
        }
        return a.first < b.first; // Ascending order
        });

    // Reconstruct the sorted array
    std::vector<int> sortedArray;
    for (const auto& pair : frequencyVec) {
        sortedArray.insert(sortedArray.end(), pair.second, pair.first); // Insert based on frequency
    }

    return sortedArray;
}
