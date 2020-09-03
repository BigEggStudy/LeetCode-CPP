//-----------------------------------------------------------------------------
// Runtime: 8ms
// Memory Usage: 
// Link: 
//-----------------------------------------------------------------------------

#include "stdafx.h"
#include "008-StringToInteger(atoi).h"

namespace LeetCode
{
    _008_StringToInteger::_008_StringToInteger()
    {
    }


    _008_StringToInteger::~_008_StringToInteger()
    {
    }

    int _008_StringToInteger::myAtoi(string str)
    {
        if (str.empty()) { return 0; }

        bool nagative = false;
        int index = 0;

        while (index < str.size())
        {
            if (!isspace(str[index])) break;
            else index++;
        }

        if (str[index] == '-')
        {
            nagative = true;
            index++;
        }
        else if (str[index] == '+')
        {
            index++;
        }

        int result = 0, digit;
        auto POSITIVE_OVERFLOW_HEAD = INT_MAX / 10;
        auto POSITIVE_OVERFLOW_TAIL = INT_MAX % 10;
        while (index < str.size() && isdigit(str[index]))
        {
            digit = str[index] - '0';
            if (result > POSITIVE_OVERFLOW_HEAD ||
                (result == POSITIVE_OVERFLOW_HEAD && digit > POSITIVE_OVERFLOW_TAIL))
            {
                return nagative ? INT_MIN : INT_MAX;
            }

            result = result * 10 + digit;
            index++;
        }

        return nagative ? -result : result;
    }
}
