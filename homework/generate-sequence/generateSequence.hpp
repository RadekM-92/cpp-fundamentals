#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> wave;
    auto sum = 0;

    for (auto i = 0; i < count; i++) {
        sum = sum + step;
        wave.push_back(sum);
    }
    return wave;
}
