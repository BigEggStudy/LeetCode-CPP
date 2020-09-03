#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\LeetCode\006-ZigZagConversion.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace LeetCode;

namespace LeetCodeTest
{
    TEST_CLASS(_006_ZigZagConversion_Test) 
    {
    public:

        TEST_METHOD(ConvertTest_General)
        {
            string input = "PAYPALISHIRING";
            _006_ZigZagConversion solution;

            string result = solution.convert(input, 3);
            Assert::AreEqual((string) "PAHNAPLSIIGYIR", result);

            result = solution.convert(input, 4);
            Assert::AreEqual((string) "PINALSIGYAHRPI", result);

            result = solution.convert(input, 5);
            Assert::AreEqual((string) "PHASIYIRPLIGAN", result);
        }

        TEST_METHOD(ConvertTest_RowNumberEqualOne)
        {
            string input = "PAYPALISHIRING";
            _006_ZigZagConversion solution;

            string result = solution.convert(input, 1);
            Assert::AreEqual(input, result);
        }

        TEST_METHOD( ConvertTest_RowNumberEqualZero)
        {
            string input = "PAYPALISHIRING";
            _006_ZigZagConversion solution;

            string result = solution.convert(input, 0);
            Assert::AreEqual(input, result);
        }

        TEST_METHOD( ConvertTest_EmptyString)
        {
            string input = "";
            _006_ZigZagConversion solution;

            string result = solution.convert(input, 0);
            Assert::AreEqual(input, result);
        }
    };
}