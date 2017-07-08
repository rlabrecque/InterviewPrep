#include "main.h"
//https://leetcode.com/problems/merge-two-sorted-lists

//Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* mergeTwoLists ( ListNode* l1, ListNode* l2 ) {
		if ( !l1 ) { return l2; }
		if ( !l2 ) { return l1; }

		ListNode* outHead = nullptr;
		ListNode* curr1 = nullptr;
		ListNode* curr2 = nullptr;

		if ( l1->val < l2->val ) {
			outHead = l1;
			curr1 = l1->next;
			curr2 = l2;
		}
		else {
			outHead = l2;
			curr1 = l1;
			curr2 = l2->next;
		}

		ListNode* outCurr = outHead;

		while ( curr1 && curr2 ) {
			if ( curr1->val < curr2->val ) {
				outCurr->next = curr1;
				curr1 = curr1->next;
			}
			else {
				outCurr->next = curr2;
				curr2 = curr2->next;
			}

			outCurr = outCurr->next;
		}

		outCurr->next = (curr1) ? curr1 : curr2;

		return outHead;
	}
};