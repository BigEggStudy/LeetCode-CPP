#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\LeetCode\\007-ReverseInteger.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace LeetCode;

namespace LeetCodeTest 
{
    TEST_CLASS(_007_ReverseInteger_Test)
    {
    public: 

        TEST_METHOD( ReverseTest_Positive)
        {
            _007_ReverseInteger solution;
            int result = solution.reverse(1);
            Assert::AreEqual(1, result);

            result = solution.reverse(123);
            Assert::AreEqual(321, result);

            result = solution.reverse(321);
            Assert::AreEqual(123, result);
        }

        TEST_METHOD(ReverseTest_Negative)
        {
            _007_ReverseInteger solution;
            int result = solution.reverse(-1);
            Assert::AreEqual(-1, result);

            result = solution.reverse(-123);
            Assert::AreEqual(-321, result);

            result = solution.reverse(-321);
            Assert::AreEqual(-123, result);
        }

        TEST_METHOD(ReverseTest_EqualZero)
        {
            _007_ReverseInteger solution;
            int result = solution.reverse(0);
            Assert::AreEqual(0, result);
        }

        TEST_METHOD(ReverseTest_PositiveOverflow)
        {
            _007_ReverseInteger solution;
            int result = solution.reverse(1534236469);
            Assert::AreEqual(0, result);
        }

        TEST_METHOD(ReverseTest_NegativeOverflow)
        {
            _007_ReverseInteger solution;
            int result = solution.reverse(-1534236469);
            Assert::AreEqual(0, result);
        }
    };
}