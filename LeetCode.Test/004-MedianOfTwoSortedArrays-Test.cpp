#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\LeetCode\004-MedianOfTwoSortedArrays.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace LeetCode;

namespace LeetCodeTest
{
    TEST_CLASS(_004_MedianOfTwoSortedArrays_Test)
    {
    public:

        TEST_METHOD(FindMedianSortedArraysTest_General_Odd)
        {
            vector<int> nums1 = { 1, 2 };
            vector<int> nums2 = { 3, 4, 5 };

            _004_MedianOfTwoSortedArrays solution;
            double result = solution.findMedianSortedArrays(nums1, nums2);

            Assert::AreEqual(3.0, result);
        }

        TEST_METHOD(FindMedianSortedArraysTest_General_Even)
        {
            vector<int> nums1 = { 1, 2, 3, 4 };
            vector<int> nums2 = { 5, 6, 7, 8 };

            _004_MedianOfTwoSortedArrays solution;
            double result = solution.findMedianSortedArrays(nums1, nums2);

            Assert::AreEqual(4.5, result);
        }

        TEST_METHOD(FindMedianSortedArraysTest_Num1Empty)
        {
            vector<int> nums1 = {};
            vector<int> nums2 = { 1, 2, 3 };

            _004_MedianOfTwoSortedArrays solution;
            double result = solution.findMedianSortedArrays(nums1, nums2);

            Assert::AreEqual(2.0, result);
        }

        TEST_METHOD(FindMedianSortedArraysTest_Num2Empty)
        {
            vector<int> nums1 = { 1, 2, 3 };
            vector<int> nums2 = {};

            _004_MedianOfTwoSortedArrays solution;
            double result = solution.findMedianSortedArrays(nums1, nums2);

            Assert::AreEqual(2.0, result);
        }

        TEST_METHOD(FindMedianSortedArraysTest_Num1Empty_Nums2SingleItem)
        {
            vector<int> nums1 = {};
            vector<int> nums2 = { 1 };

            _004_MedianOfTwoSortedArrays solution;
            double result = solution.findMedianSortedArrays(nums1, nums2);

            Assert::AreEqual(1.0, result);
        }

        TEST_METHOD(FindMedianSortedArraysTest_Num2Empty_Nums1SingleItem)
        {
            vector<int> nums1 = { 1 };
            vector<int> nums2 = {};

            _004_MedianOfTwoSortedArrays solution;
            double result = solution.findMedianSortedArrays(nums1, nums2);

            Assert::AreEqual(1.0, result);
        }

        TEST_METHOD(FindMedianSortedArraysTest_Nums1SingleItem_Odd)
        {
            vector<int> nums1 = { 1 };
            vector<int> nums2 = { 2, 3, 4, 5, 6, 7 };

            _004_MedianOfTwoSortedArrays solution;
            double result = solution.findMedianSortedArrays(nums1, nums2);

            Assert::AreEqual(4.0, result);
        }

        TEST_METHOD(FindMedianSortedArraysTest_Nums1SingleItem_Even)
        {
            vector<int> nums1 = { 1 };
            vector<int> nums2 = { 2, 3, 4, 5, 6 };

            _004_MedianOfTwoSortedArrays solution;
            double result = solution.findMedianSortedArrays(nums1, nums2);

            Assert::AreEqual(3.5, result);
        }

        TEST_METHOD(FindMedianSortedArraysTest_Nums2SingleItem_Odd)
        {
            vector<int> nums1 = { 2, 3, 4, 5, 6, 7 };
            vector<int> nums2 = { 1 };

            _004_MedianOfTwoSortedArrays solution;
            double result = solution.findMedianSortedArrays(nums1, nums2);

            Assert::AreEqual(4.0, result);
        }

        TEST_METHOD(FindMedianSortedArraysTest_Nums2SingleItem_Even)
        {
            vector<int> nums1 = { 2, 3, 4, 5, 6 };
            vector<int> nums2 = { 1 };

            _004_MedianOfTwoSortedArrays solution;
            double result = solution.findMedianSortedArrays(nums1, nums2);

            Assert::AreEqual(3.5, result);
        }

        TEST_METHOD(FindMedianSortedArraysTest_MixedArray)
        {
            vector<int> nums1 = { 2 };
            vector<int> nums2 = { 1, 3, 4 };

            _004_MedianOfTwoSortedArrays solution;
            double result = solution.findMedianSortedArrays(nums1, nums2);

            Assert::AreEqual(2.5, result);
        }

        TEST_METHOD(FindMedianSortedArraysTest_DuplicateItems)
        {
            vector<int> nums1 = { 1, 1, 3, 3 };
            vector<int> nums2 = { 1, 1, 3, 3 };

            _004_MedianOfTwoSortedArrays solution;
            double result = solution.findMedianSortedArrays(nums1, nums2);

            Assert::AreEqual(2.0, result);
        }
    };
}