#pragma once
#include <vector>
#include <unordered_map>
#include "common.h"

using namespace std;

namespace LeetCode
{
    class LEETCODE_API _001_TwoSum
    {
    public:
        _001_TwoSum();
        ~_001_TwoSum();

        vector<int> twoSum(vector<int>& nums, int target);
    };
}
