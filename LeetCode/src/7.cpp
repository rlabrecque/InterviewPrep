#include "main.h"
//https://leetcode.com/problems/reverse-integer

// Version that checks for an overflow at each step.
class Solution {
public:
	int reverse(int x) {
		int out = 0;
		int temp = 0;
		while (x) {
			temp = (out * 10) + (x % 10);
			if (temp / 10 != out) { return 0; }
			x /= 10;
			out = temp;
		}

		return out;
	}
};

// Original version that used long long to ensure no overflow, then checks afterwards.
/*class Solution {
public:
	int reverse(int x) {
		long long out = 0;
		while (x) {
			out = (out * 10) + (x % 10);
			x /= 10;
		}
		
		if (out < INT_MIN || out > INT_MAX) { return 0; }
		
		return out;
	}
};*/
