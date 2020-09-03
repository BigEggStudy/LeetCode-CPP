#pragma once
#include <string>
#include "common.h"

using namespace std;

namespace LeetCode
{
    class LEETCODE_API _003_LongestSubstringWithoutRepeatingCharacters
    {
    public:
        _003_LongestSubstringWithoutRepeatingCharacters();
        ~_003_LongestSubstringWithoutRepeatingCharacters();

        int lengthOfLongestSubstring(string s);
    };
}
