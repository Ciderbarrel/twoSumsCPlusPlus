// solution.cpp
#include "solution.h"

std::vector<int> Solution::twoSum(const std::vector<int>& nums, int target) const {
    std::unordered_map<int, int> hashMap;
    for (int j = 0; j < nums.size(); j++) {
        int targetValue = target - nums[j];

        auto it = hashMap.find(targetValue);
        if (it != hashMap.end()) {
            return {it->second, j};
        }

        hashMap[nums[j]] = j;
    }
    return {-1, -1};
}
