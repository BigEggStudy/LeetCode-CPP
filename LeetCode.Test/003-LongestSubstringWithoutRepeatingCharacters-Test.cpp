#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\LeetCode\003-LongestSubstringWithoutRepeatingCharacters.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace LeetCode;

namespace LeetCodeTest
{
    TEST_CLASS(_003_LongestSubstringWithoutRepeatingCharacters_Test)
    {
    public:

        TEST_METHOD(LengthOfLongestSubstringTest_General)
        {
            string input = "abcabcbb";

            _003_LongestSubstringWithoutRepeatingCharacters solution;
            int result = solution.lengthOfLongestSubstring(input);

            Assert::AreEqual(3, result);
        }

        TEST_METHOD(LengthOfLongestSubstringTest_RepeatChars)
        {
            string input = "bbbbb";

            _003_LongestSubstringWithoutRepeatingCharacters solution;
            int result = solution.lengthOfLongestSubstring(input);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(LengthOfLongestSubstringTest_EmptyInput)
        {
            string input = "";

            _003_LongestSubstringWithoutRepeatingCharacters solution;
            int result = solution.lengthOfLongestSubstring(input);

            Assert::AreEqual(0, result);
        }

        TEST_METHOD(LengthOfLongestSubstringTest_LongString)
        {
            string input = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";

            _003_LongestSubstringWithoutRepeatingCharacters solution;
            int result = solution.lengthOfLongestSubstring(input);

            Assert::AreEqual(26, result);
        }

        TEST_METHOD(LengthOfLongestSubstringTest_LongString_HaveShortRepeat)
        {
            string input = "abcdefghijklmnopqrstuvwxyzabcdefghijk  lmnopqrstuvwxyz";

            _003_LongestSubstringWithoutRepeatingCharacters solution;
            int result = solution.lengthOfLongestSubstring(input);

            Assert::AreEqual(27, result);
        }

    };
}