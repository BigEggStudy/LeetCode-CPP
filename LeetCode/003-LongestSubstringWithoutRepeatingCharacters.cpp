//-----------------------------------------------------------------------------
// Runtime: 12ms
// Memory Usage: 
// Link: 
//-----------------------------------------------------------------------------

#include "stdafx.h"
#include "003-LongestSubstringWithoutRepeatingCharacters.h"

namespace LeetCode
{
    _003_LongestSubstringWithoutRepeatingCharacters::_003_LongestSubstringWithoutRepeatingCharacters()
    {
    }

    _003_LongestSubstringWithoutRepeatingCharacters::~_003_LongestSubstringWithoutRepeatingCharacters()
    {
    }

    int _003_LongestSubstringWithoutRepeatingCharacters::lengthOfLongestSubstring(string s)
    {
        if (s.empty()) { return 0; }

        int map[256];
        memset(map, -1, sizeof(map));

        int maxLen = 0;
        int lastRepeatPos = -1;

        for (int i = 0; i < s.length(); i++)
        {
            if (map[s[i]] != -1 && lastRepeatPos < map[s[i]])
            {
                lastRepeatPos = map[s[i]];
            }
            if (maxLen < i - lastRepeatPos)
            {
                maxLen = i - lastRepeatPos;
            }
            map[s[i]] = i;
        }

        return maxLen;
    }
}
