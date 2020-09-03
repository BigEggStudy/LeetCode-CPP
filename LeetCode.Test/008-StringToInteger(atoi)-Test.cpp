#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\LeetCode\\008-StringToInteger(atoi).h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace LeetCode;

namespace LeetCodeTest
{
    TEST_CLASS(_008_StringToInteger_Test)
    {
    public:

        TEST_METHOD(MyAtoiTest_Positive)
        {
            _008_StringToInteger solution;

            auto result = solution.myAtoi("123");
            Assert::AreEqual(123, result);

            result = solution.myAtoi("+123");
            Assert::AreEqual(123, result);
        }

        TEST_METHOD(MyAtoiTest_Nagative)
        {
            _008_StringToInteger solution;

            auto result = solution.myAtoi("-123");
            Assert::AreEqual(-123, result);
        }

        TEST_METHOD(MyAtoiTest_Zero)
        {
            _008_StringToInteger solution;

            auto result = solution.myAtoi("0");
            Assert::AreEqual(0, result);
        }

        TEST_METHOD(MyAtoiTest_PositiveZero)
        {
            _008_StringToInteger solution;

            auto result = solution.myAtoi("+0");
            Assert::AreEqual(0, result);
        }

        TEST_METHOD(MyAtoiTest_NagativeZero)
        {
            _008_StringToInteger solution;

            auto result = solution.myAtoi("-0");
            Assert::AreEqual(0, result);
        }

        TEST_METHOD(MyAtoiTest_Boundary)
        {
            _008_StringToInteger solution;

            auto result = solution.myAtoi("2147483647");
            Assert::AreEqual(INT_MAX, result);

            result = solution.myAtoi("2147483646");
            Assert::AreEqual(2147483646, result);

            result = solution.myAtoi("-2147483648");
            Assert::AreEqual(INT_MIN, result);

            result = solution.myAtoi("-2147483647");
            Assert::AreEqual(-2147483647, result);
        }

        TEST_METHOD(MyAtoiTest_PositiveOverflow)
        {
            _008_StringToInteger solution;

            auto result = solution.myAtoi("2147483648");
            Assert::AreEqual(INT_MAX, result);

            result = solution.myAtoi("2247483647");
            Assert::AreEqual(INT_MAX, result);
        }

        TEST_METHOD(MyAtoiTest_NagativeOverflow)
        {
            _008_StringToInteger solution;

            auto result = solution.myAtoi("-2147483649");
            Assert::AreEqual(INT_MIN, result);

            result = solution.myAtoi("-2247483648");
            Assert::AreEqual(INT_MIN, result);
        }

        TEST_METHOD(MyAtoiTest_WhiteSpaceInFrontOfInput)
        {
            _008_StringToInteger solution;

            auto result = solution.myAtoi("   123");
            Assert::AreEqual(123, result);

            result = solution.myAtoi("   -123");
            Assert::AreEqual(-123, result);
        }

        TEST_METHOD(MyAtoiTest_EmptyString)
        {
            _008_StringToInteger solution;

            auto result = solution.myAtoi("");
            Assert::AreEqual(0, result);

            result = solution.myAtoi("   ");
            Assert::AreEqual(0, result);
        }

        TEST_METHOD(MyAtoiTest_InvalidInput)
        {
            _008_StringToInteger solution;

            auto result = solution.myAtoi("abc");
            Assert::AreEqual(0, result);
        }

        TEST_METHOD(MyAtoiTest_MixInput)
        {
            _008_StringToInteger solution;

            auto result = solution.myAtoi("123abc");
            Assert::AreEqual(123, result);

            result = solution.myAtoi("-123abc");
            Assert::AreEqual(-123, result);
        }

        TEST_METHOD(MyAtoiTest_MixInputWithOverflow)
        {
            _008_StringToInteger solution;

            auto result = solution.myAtoi("  2147483648abc");
            Assert::AreEqual(INT_MAX, result);

            result = solution.myAtoi("  2247483647abc");
            Assert::AreEqual(INT_MAX, result);

            result = solution.myAtoi("  -2147483649abc");
            Assert::AreEqual(INT_MIN, result);

            result = solution.myAtoi("  -2247483648abc");
            Assert::AreEqual(INT_MIN, result);
        }
    };
}