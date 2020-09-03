#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\LeetCode\001-TwoSum.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace LeetCode;

namespace LeetCodeTest
{
    TEST_CLASS(_001_TwoSum_Test)
    {
    public:
        _001_TwoSum_Test() {
            for (int i = 0; i < 20000; i++)
            {
                largeArray.push_back(i * 2);
            }
        }

        TEST_METHOD(TwoSumTest_Ordered)
        {
            vector<int> nums = { 2, 7, 11, 15 };
            int target = 9;

            _001_TwoSum solution;
            vector<int> result = solution.twoSum(nums, target);

            Assert::AreEqual(2, (int)result.size());
            Assert::AreEqual(1, result[0]);
            Assert::AreEqual(2, result[1]);
        }

        TEST_METHOD(TwoSumTest_Unordered)
        {
            vector<int> nums = { 5, 75, 25 };
            int target = 100;

            _001_TwoSum solution;
            vector<int> result = solution.twoSum(nums, target);

            Assert::AreEqual(2, (int)result.size());
            Assert::AreEqual(2, result[0]);
            Assert::AreEqual(3, result[1]);
        }

        TEST_METHOD(TwoSumTest_Duplicate)
        {
            vector<int> nums = { 5, 5, 15, 30 };
            int target = 20;

            _001_TwoSum solution;
            vector<int> result = solution.twoSum(nums, target);

            Assert::AreEqual(2, (int)result.size());
            Assert::AreEqual(2, result[0]);
            Assert::AreEqual(3, result[1]);
        }

        TEST_METHOD(TwoSumTest_AllSame)
        {
            vector<int> nums = { 5, 5, 5, 5 };
            int target = 10;

            _001_TwoSum solution;
            vector<int> result = solution.twoSum(nums, target);

            Assert::AreEqual(2, (int)result.size());
            Assert::AreEqual(1, result[0]);
            Assert::AreEqual(2, result[1]);
        }

        TEST_METHOD(TwoSumTest_NoTarget)
        {
            vector<int> nums = { 2, 7, 11, 15 };
            int target = 5;

            _001_TwoSum solution;
            vector<int> result = solution.twoSum(nums, target);

            Assert::AreEqual(0, (int)result.size());
        }

        TEST_METHOD(TwoSumTest_LargeArray)
        {
            int target = 19082;

            _001_TwoSum solution;
            vector<int> result = solution.twoSum(largeArray, target);

            Assert::AreEqual(2, (int)result.size());
            Assert::AreEqual(4771, result[0]);
            Assert::AreEqual(4772, result[1]);
        }

        TEST_METHOD(TwoSumTest_LargeArray_NoTarget)
        {
            int target = 19081;

            _001_TwoSum solution;
            vector<int> result = solution.twoSum(largeArray, target);

            Assert::AreEqual(0, (int)result.size());
        }

    private:
        vector<int> largeArray;
    };
}