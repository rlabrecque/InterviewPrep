#include "main.h"
//https://leetcode.com/problems/add-two-numbers

// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* curNode1 = l1;
		ListNode* curNode2 = l2;
		ListNode* headNode = nullptr;
		ListNode* curOutNode = nullptr;
		int carry = 0;
		int temp = 0;
		while (true) {
			temp = carry;

			if (curNode1) {
				temp += curNode1->val;
				curNode1 = curNode1->next;
			}
			if (curNode2) {
				temp += curNode2->val;
				curNode2 = curNode2->next;
			}

			if (temp >= 10) {
				temp -= 10;
				carry = 1;
			}
			else {
				carry = 0;
			}

			auto newNode = new ListNode(temp);
			if (headNode == NULL) {
				headNode = newNode;
			}
			else {
				curOutNode->next = newNode;
			}
			curOutNode = newNode;

			if (!carry && !curNode1 && !curNode2)
				break;
		}

		return headNode;
	}
};
