//-----------------------------------------------------------------------------
// Runtime: 8ms
// Memory Usage: 
// Link: 
//-----------------------------------------------------------------------------

#include "stdafx.h"
#include "007-ReverseInteger.h"

namespace LeetCode
{
    _007_ReverseInteger::_007_ReverseInteger()
    {
    }


    _007_ReverseInteger::~_007_ReverseInteger()
    {
    }

    int _007_ReverseInteger::reverse(int x)
    {
        auto const POSITIVE_OVERFLOW = INT_MAX / 10;
        auto const NAGATIVE_OVERFLOW = INT_MIN / 10;

        auto result = 0;
        while (x != 0)
        {
            if (result > POSITIVE_OVERFLOW || result < NAGATIVE_OVERFLOW)
            {
                return 0;
            }
            result = result * 10 + x % 10;
            x /= 10;
        }

        return result;
    }
}
