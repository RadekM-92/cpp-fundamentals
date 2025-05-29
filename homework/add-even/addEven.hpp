#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int sum = 0;

    for (auto element : numbers) {
        if (0 == element % 2) {
            sum = sum + element;
        }
    }
    return sum;
}
