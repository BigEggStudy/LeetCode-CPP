#pragma once
#ifdef LEETCODE_EXPORTS
#define LEETCODE_API __declspec(dllexport)
#else
#define LEETCODE_API __declspec(dllimport)
#endif

namespace LeetCode
{
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };
}