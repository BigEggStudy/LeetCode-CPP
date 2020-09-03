//-----------------------------------------------------------------------------
// Runtime: 16ms
// Memory Usage: 
// Link: 
//-----------------------------------------------------------------------------

#include "stdafx.h"
#include "006-ZigZagConversion.h"

namespace LeetCode
{
    _006_ZigZagConversion::_006_ZigZagConversion()
    {
    }


    _006_ZigZagConversion::~_006_ZigZagConversion()
    {
    }

    string _006_ZigZagConversion::convert(string s, int numRows)
    {
        if (numRows <= 1 || s.size() <= numRows) { return s; }

        string result;
        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0, originalIndex = i;
            originalIndex < s.size();
                j++, originalIndex = (numRows * 2 - 2) * j + i)
            {
                result.append(1, s[originalIndex]);
                if (i == 0 || i == numRows - 1) { continue; }

                originalIndex += (numRows * 2 - 2) - i * 2;
                if (originalIndex < s.size())
                {
                    result.append(1, s[originalIndex]);
                }
            }
        }

        return result;
    }
}
