//-----------------------------------------------------------------------------
// Runtime: 36ms
// Memory Usage: 
// Link: 
//-----------------------------------------------------------------------------

#include "stdafx.h"
#include "002-AddTwoNumbers.h"

namespace LeetCode
{
    _002_AddTwoNumbers::_002_AddTwoNumbers()
    {
    }


    _002_AddTwoNumbers::~_002_AddTwoNumbers()
    {
    }

    int getValueAndMoveNext(ListNode **node)
    {
        if (*node == nullptr) { return 0; }
        int value = (*node)->val;
        *node = (*node)->next;
        return value;
    }

    ListNode *calculateNext(ListNode **node, ListNode **l1, ListNode **l2)
    {
        int value1 = getValueAndMoveNext(l1);
        int value2 = getValueAndMoveNext(l2);

        int sum = value1 + value2 + (*node)->val;
        if (sum >= 10)
        {
            (*node)->val = sum % 10;
            (*node)->next = new ListNode(1);
        }
        else
        {
            (*node)->val = sum;
            (*node)->next = new ListNode(0);
        }

        return *node;
    }

    ListNode * _002_AddTwoNumbers::addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *first = new ListNode(-1);
        first->next = new ListNode(0);
        ListNode *current = first;

        while (l1 != nullptr || l2 != nullptr)
        {
            current = calculateNext(&(current->next), &l1, &l2);
        }

        if (current->next->val == 0) {
            current->next = nullptr;
        }

        return first->next;
    }
}
