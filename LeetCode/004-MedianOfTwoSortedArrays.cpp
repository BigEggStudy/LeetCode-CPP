//-----------------------------------------------------------------------------
// Runtime: 40ms
// Memory Usage: 
// Link: 
//-----------------------------------------------------------------------------

#include "stdafx.h"
#include "004-MedianOfTwoSortedArrays.h"

namespace LeetCode
{
    _004_MedianOfTwoSortedArrays::_004_MedianOfTwoSortedArrays()
    {
    }


    _004_MedianOfTwoSortedArrays::~_004_MedianOfTwoSortedArrays()
    {
    }

    int findKth(vector<int> & nums1, int startIndex1, vector<int> & nums2, int startIndex2, int k) {
        int nums1Left = (int)nums1.size() - startIndex1;
        int nums2Left = (int)nums2.size() - startIndex2;

        if (nums1Left < nums2Left) { return findKth(nums2, startIndex2, nums1, startIndex1, k); }
        if (nums2Left <= 0) { return nums1[startIndex1 + k - 1]; }
        if (k == 1) { return min(nums1[startIndex1], nums2[startIndex2]); }

        int index1 = min(k / 2, nums1Left);
        int index2 = min(k - index1, nums2Left);
        if (nums1[startIndex1 + index1 - 1] > nums2[startIndex2 + index2 - 1])
        {
            return findKth(nums1, startIndex1, nums2, startIndex2 + index2, k - index2);
        }
        else if (nums1[startIndex1 + index1 - 1] < nums2[startIndex2 + index2 - 1])
        {
            return findKth(nums1, startIndex1 + index1, nums2, startIndex2, k - index1);
        }
        else
        {
            return nums1[startIndex1 + index1 - 1];
        }
    }

    double _004_MedianOfTwoSortedArrays::findMedianSortedArrays(vector<int> & nums1, vector<int> & nums2)
    {
        int m = (int)nums1.size() + (int)nums2.size();

        if (m & 0x1)
        {
            return findKth(nums1, 0, nums2, 0, (m + 1) / 2);
        }
        else
        {
            return (findKth(nums1, 0, nums2, 0, m / 2) + findKth(nums1, 0, nums2, 0, m / 2 + 1)) / 2.0;
        }
    }
}
