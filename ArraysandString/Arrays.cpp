#include "Arrays.h"
#include <algorithm>

std::vector<std::string> Arrays::transformAndSort(const std::vector<std::string>& input) {
    std::vector<std::string> transformed;

    // Transform and reverse each string
    for (const auto& str : input) {
        std::string reversed = std::string(str.rbegin(), str.rend());
        transformed.push_back(reversed);
    }

    // Sort the strings first by length, then alphabetically
    std::sort(transformed.begin(), transformed.end(),
        [](const std::string& a, const std::string& b) {
            if (a.length() != b.length())
                return a.length() < b.length();
            return a < b;
        });

    return transformed;
}
