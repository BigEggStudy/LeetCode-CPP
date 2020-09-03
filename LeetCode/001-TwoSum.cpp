//-----------------------------------------------------------------------------
// Runtime: 16ms
// Memory Usage: 
// Link: 
//-----------------------------------------------------------------------------

#include "stdafx.h"
#include "001-TwoSum.h"

namespace LeetCode
{
    _001_TwoSum::_001_TwoSum()
    {
    }


    _001_TwoSum::~_001_TwoSum()
    {
    }

    vector<int> _001_TwoSum::twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> restIndex;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            if (restIndex.find(nums[i]) == restIndex.end())
            {
                restIndex[target - nums[i]] = i;
            }
            else
            {
                result.push_back(restIndex[nums[i]] + 1);
                result.push_back(i + 1);
                break;
            }
        }

        return result;
    }
}
