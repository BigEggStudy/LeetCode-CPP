#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\LeetCode\005-LongestPalindromicSubstring.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace LeetCode;

namespace LeetCodeTest
{
    TEST_CLASS(_005_LongestPalindromicSubstring_Test)
    {
    public:

        TEST_METHOD(LongestPalindromeTest_Odd)
        {
            string input = "abcdefgfedcba";

            _005_LongestPalindromicSubstring solution;
            string result = solution.longestPalindrome(input);

            Assert::AreEqual((string) "abcdefgfedcba", result);
        }

        TEST_METHOD(LongestPalindromeTest_Even)
        {
            string input = "abcdefggfedcba";

            _005_LongestPalindromicSubstring solution;
            string result = solution.longestPalindrome(input);

            Assert::AreEqual((string) "abcdefggfedcba", result);
        }

        TEST_METHOD(LongestPalindromeTest_AllTheSame_Odd)
        {
            string input = "ccc";

            _005_LongestPalindromicSubstring solution;
            string result = solution.longestPalindrome(input);

            Assert::AreEqual((string) "ccc", result);
        }

        TEST_METHOD(LongestPalindromeTest_AllTheSame_Even)
        {
            string input = "aaaaaaaaaa";

            _005_LongestPalindromicSubstring solution;
            string result = solution.longestPalindrome(input);

            Assert::AreEqual((string) "aaaaaaaaaa", result);
        }

        TEST_METHOD(LongestPalindromeTest_EmptyString)
        {
            string input = "";

            _005_LongestPalindromicSubstring solution;
            string result = solution.longestPalindrome(input);

            Assert::AreEqual((string) "", result);
        }

        TEST_METHOD(LongestPalindromeTest_OneCharacterString)
        {
            string input = "a";

            _005_LongestPalindromicSubstring solution;
            string result = solution.longestPalindrome(input);

            Assert::AreEqual((string) "a", result);
        }

        TEST_METHOD(LongestPalindromeTest_LongestAtStart)
        {
            string input = "aabccdccbaaeeggee";

            _005_LongestPalindromicSubstring solution;
            string result = solution.longestPalindrome(input);

            Assert::AreEqual((string) "aabccdccbaa", result);
        }

        TEST_METHOD(LongestPalindromeTest_LongestAtEnd)
        {
            string input = "eegffgeeaabcdcbaa";

            _005_LongestPalindromicSubstring solution;
            string result = solution.longestPalindrome(input);

            Assert::AreEqual((string) "aabcdcbaa", result);
        }

        TEST_METHOD(LongestPalindromeTest_MultipleMixPalindrome) {
            string input = "abcdcbbcd";

            _005_LongestPalindromicSubstring solution;
            string result = solution.longestPalindrome(input);

            Assert::AreEqual((string) "dcbbcd", result);
        }

        TEST_METHOD(LongestPalindromeTest_MultipleMixPalindrome_2) {
            string input = "abcddcbebcd";

            _005_LongestPalindromicSubstring solution;
            string result = solution.longestPalindrome(input);

            Assert::AreEqual((string) "dcbebcd", result);
        }
    };
}