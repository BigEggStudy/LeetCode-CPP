//-----------------------------------------------------------------------------
// Runtime: 4ms
// Memory Usage: 
// Link: 
//-----------------------------------------------------------------------------

#include "stdafx.h"
#include "005-LongestPalindromicSubstring.h"

namespace LeetCode
{
    _005_LongestPalindromicSubstring::_005_LongestPalindromicSubstring()
    {
    }


    _005_LongestPalindromicSubstring::~_005_LongestPalindromicSubstring()
    {
    }

    string _005_LongestPalindromicSubstring::longestPalindrome(string s)
    {
        if (s.size() <= 1) { return s; }

        int n = (int)s.size();
        int n2 = n * 2 + 1;

        char *s2 = new char[n2];
        for (int i = 0; i < n; i++)
        {
            s2[i * 2] = '#';
            s2[i * 2 + 1] = s[i];
        }
        s2[n2 - 1] = '#';

        int *p = new int[n2];
        memset(p, 0, n2);
        int range_max = 0, center = 0;
        int longestPalindromeCenter = 0;

        for (int i = 1; i < n2 - 1; i++)
        {
            if (range_max > i)
            {
                p[i] = min(p[(center << 1) - i], range_max - i);
            }
            else
            {
                p[i] = 0;
            }

            while (i + 1 + p[i] < n2 && i - 1 - p[i] >= 0 && s2[i + 1 + p[i]] == s2[i - 1 - p[i]])
            {
                p[i]++;
            }

            if (i + p[i] > range_max) {
                center = i;
                range_max = i + p[i];
            }

            if (p[i] > p[longestPalindromeCenter]) {
                longestPalindromeCenter = i;
            }
        }

        int range = p[longestPalindromeCenter];
        string longestPalindrome = s.substr((longestPalindromeCenter - range) / 2, range);

        delete[] s2;
        delete[] p;
        s2 = nullptr;
        p = nullptr;
        return longestPalindrome;
    }
}
