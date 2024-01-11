#ifndef PROBLEM_H
#define PROBLEM_H

#pragma once

#include <iostream>
#include <vector>
#include "solution.h"

class Problem {
private:
    struct Pair {
        std::vector<int> nums;
        int target;
    };

public:
    std::vector<Pair> problems;

    void addPair(const std::vector<int>& vectorOfVector, int correspondingInt);
    std::vector<Pair>::const_iterator begin() const;
    std::vector<Pair>::const_iterator end() const;
    std::vector<int> twoSums(const Pair& pair, const Solution& solution) const;
};

#endif // PROBLEM_H
