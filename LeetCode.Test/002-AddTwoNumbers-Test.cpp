#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\LeetCode\002-AddTwoNumbers.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace LeetCode;

namespace LeetCodeTest
{
    TEST_CLASS(_002_AddTwoNumbers_Test)
    {
    public:

        TEST_METHOD(AddTwoNumbersTest_General)
        {
            int nums[3] = { 2, 4, 3 };
            ListNode *link = GenerateList(nums, 3);

            _002_AddTwoNumbers solution;
            ListNode *result = solution.addTwoNumbers(link, link);

            int resultNums[3] = { 4, 8, 6 };
            AssertList(result, resultNums, 3);
        }

        TEST_METHOD(AddTwoNumbersTest_General_2)
        {
            int nums[1] = { 0 };
            ListNode *link = GenerateList(nums, 1);

            _002_AddTwoNumbers solution;
            ListNode *result = solution.addTwoNumbers(link, link);

            int resultNums[1] = { 0 };
            AssertList(result, resultNums, 1);
        }

        TEST_METHOD(AddTwoNumbersTest_HasCarry)
        {
            int nums1[3] = { 2, 4, 3 };
            ListNode *link1 = GenerateList(nums1, 3);
            int nums2[3] = { 5, 6, 4 };
            ListNode *link2 = GenerateList(nums2, 3);

            _002_AddTwoNumbers solution;
            ListNode *result = solution.addTwoNumbers(link1, link2);

            int resultNums[3] = { 7, 0, 8 };
            AssertList(result, resultNums, 3);
        }

        TEST_METHOD(AddTwoNumbersTest_HasMultipleCarry)
        {
            int nums1[1] = { 1 };
            ListNode *link1 = GenerateList(nums1, 1);
            int nums2[2] = { 9, 9 };
            ListNode *link2 = GenerateList(nums2, 2);

            _002_AddTwoNumbers solution;
            ListNode *result = solution.addTwoNumbers(link1, link2);

            int resultNums[3] = { 0, 0, 1 };
            AssertList(result, resultNums, 3);
        }

        TEST_METHOD(AddTwoNumbersTest_FirstNumCarry)
        {
            int nums1[3] = { 3, 4, 4 };
            ListNode *link1 = GenerateList(nums1, 3);
            int nums2[3] = { 3, 4, 6 };
            ListNode *link2 = GenerateList(nums2, 3);

            _002_AddTwoNumbers solution;
            ListNode *result = solution.addTwoNumbers(link1, link2);

            int resultNums[4] = { 6, 8, 0, 1 };
            AssertList(result, resultNums, 4);
        }

        TEST_METHOD(AddTwoNumbersTest_L1Longer)
        {
            int nums1[4] = { 2, 4, 3, 1 };
            ListNode *link1 = GenerateList(nums1, 4);
            int nums2[3] = { 5, 6, 4 };
            ListNode *link2 = GenerateList(nums2, 3);

            _002_AddTwoNumbers solution;
            ListNode *result = solution.addTwoNumbers(link1, link2);

            int resultNums[4] = { 7, 0, 8, 1 };
            AssertList(result, resultNums, 4);
        }

        TEST_METHOD(AddTwoNumbersTest_L1Longer_2)
        {
            int nums1[2] = { 1, 8 };
            ListNode *link1 = GenerateList(nums1, 2);
            int nums2[1] = { 0 };
            ListNode *link2 = GenerateList(nums2, 1);

            _002_AddTwoNumbers solution;
            ListNode *result = solution.addTwoNumbers(link1, link2);

            int resultNums[2] = { 1, 8 };
            AssertList(result, resultNums, 2);
        }

        TEST_METHOD(AddTwoNumbersTest_L1Empty)
        {
            ListNode *link1 = GenerateList(nullptr, 0);
            int nums2[2] = { 1, 8 };
            ListNode *link2 = GenerateList(nums2, 2);

            _002_AddTwoNumbers solution;
            ListNode *result = solution.addTwoNumbers(link1, link2);

            int resultNums[2] = { 1, 8 };
            AssertList(result, resultNums, 2);
        }

        TEST_METHOD(AddTwoNumbersTest_L2Longer)
        {
            int nums1[3] = { 2, 4, 3 };
            ListNode *link1 = GenerateList(nums1, 3);
            int nums2[4] = { 5, 6, 4, 3 };
            ListNode *link2 = GenerateList(nums2, 4);

            _002_AddTwoNumbers solution;
            ListNode *result = solution.addTwoNumbers(link1, link2);

            int resultNums[4] = { 7, 0, 8, 3 };
            AssertList(result, resultNums, 4);
        }

        TEST_METHOD(AddTwoNumbersTest_L2Longer_2)
        {
            int nums1[1] = { 0 };
            ListNode *link1 = GenerateList(nums1, 1);
            int nums2[2] = { 1, 8 };
            ListNode *link2 = GenerateList(nums2, 2);

            _002_AddTwoNumbers solution;
            ListNode *result = solution.addTwoNumbers(link1, link2);

            int resultNums[2] = { 1, 8 };
            AssertList(result, resultNums, 2);
        }

        TEST_METHOD(AddTwoNumbersTest_L2Empty)
        {
            int nums1[2] = { 1, 8 };
            ListNode *link1 = GenerateList(nums1, 2);
            ListNode *link2 = GenerateList(nullptr, 0);

            _002_AddTwoNumbers solution;
            ListNode *result = solution.addTwoNumbers(link1, link2);

            int resultNums[2] = { 1, 8 };
            AssertList(result, resultNums, 2);
        }

    private:
        ListNode *GenerateList(int *nums, int size)
        {
            if (nums == nullptr || size == 0) { return nullptr; }

            ListNode *first, *current;
            first = new ListNode(-1);
            current = first;
            for (int i = 0; i < size; i++)
            {
                if (current->next == nullptr) {
                    current->next = new ListNode(nums[i]);
                }
                current = current->next;
            }

            return first->next;
        }

        void AssertList(ListNode *first, int *nums, int size)
        {
            Assert::IsNotNull(first);
            Assert::IsNotNull(nums);
            Assert::IsTrue(size > 0);

            ListNode *current = first;
            for (int i = 0; i < size; i++)
            {
                Assert::IsNotNull(current);
                Assert::AreEqual(nums[i], current->val);
                current = current->next;
            }

            Assert::IsNull(current);
        }
    };
}