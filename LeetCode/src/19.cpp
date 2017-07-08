#include "main.h"
//https://leetcode.com/problems/remove-nth-node-from-end-of-list

//Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* slow = head;
		ListNode* fast = head;
		ListNode* prev = nullptr;

		for (int i = 1; fast->next; ++i) {
			fast = fast->next;
			if (i < n) {
				continue;
			}

			prev = slow;
			slow = slow->next;
		}

		if (slow == head) {
			//delete slow
			return slow->next;
		}

		//delete slow
		prev->next = slow->next;

		return head;
	}
};

// Initial two pass implementation
/*class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		int length = 1;
		ListNode* prev = head;
		while (prev->next) {
			prev = prev->next;
			++length;
		}

		if (length == n) {
			return head->next;
		}

		int i = 1;
		prev = head;
		while (true) {
			ListNode* current = prev->next;
			if (length - i == n) {
				if (current)
					prev->next = current->next;
				else
					prev->next = NULL;

				return head;
			}
			prev = prev->next;
			++i;
		}
	}
};
*/