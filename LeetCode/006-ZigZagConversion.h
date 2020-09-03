#pragma once
#include <string>
#include "common.h"

using namespace std;

namespace LeetCode
{
    class LEETCODE_API _006_ZigZagConversion
    {
    public:
        _006_ZigZagConversion();
        ~_006_ZigZagConversion();

        string convert(string s, int numRows);
    };
}
