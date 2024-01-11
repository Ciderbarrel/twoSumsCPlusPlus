// problem.cpp
#include "problem.h"

void Problem::addPair(const std::vector<int>& vectorOfVector, int correspondingInt) {
    problems.emplace_back(Pair{vectorOfVector, correspondingInt});
}

std::vector<Problem::Pair>::const_iterator Problem::begin() const {
    return problems.begin();
}

std::vector<Problem::Pair>::const_iterator Problem::end() const {
    return problems.end();
}

std::vector<int> Problem::twoSums(const Pair& pair, const Solution& solution) const {
    return solution.twoSum(pair.nums, pair.target);
}
