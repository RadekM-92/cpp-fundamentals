#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max = vec[0];

    for (auto element : vec) {
        max = std::max(max, element);
    }

    return max;
}
