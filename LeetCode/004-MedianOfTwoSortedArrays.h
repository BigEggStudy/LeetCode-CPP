#pragma once
#include <vector>
#include "common.h"

using namespace std;

namespace LeetCode
{
    class LEETCODE_API _004_MedianOfTwoSortedArrays
    {
    public:
        _004_MedianOfTwoSortedArrays();
        ~_004_MedianOfTwoSortedArrays();

        double findMedianSortedArrays(vector<int> & nums1, vector<int> & nums2);
    };
}
