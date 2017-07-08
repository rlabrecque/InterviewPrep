#include "main.h"
//https://leetcode.com/problems/string-to-integer-atoi

class Solution {
public:
	int myAtoi(string str) {
		int out = 0;
		bool bIsPositive = true;
		bool bPositiveSet = false;
		bool bNumSet = false;

		for (int i = 0; i < str.size(); ++i) {
			if (str[i] < '0' || str[i] > '9') {
				if (bPositiveSet || bNumSet) {
					break;
				}
				else if (str[i] == '+') {
					bIsPositive = true;
					bPositiveSet = true;
					continue;
				}
				else if (str[i] == '-') {
					bIsPositive = false;
					bPositiveSet = true;
					continue;
				}
				else if (str[i] == ' ') {
					continue;
				}
				else {
					break;
				}
			}

			if ((long long)(((long long)out * 10) + (str[i] - 48)) > INT_MAX) {
				out = bIsPositive ? INT_MAX : INT_MIN;
				break;
			}

			out = (out * 10) + (str[i] - 48);
			bNumSet = true;
		}

		if (!bIsPositive) {
			out = -out;
		}

		return out;
	}
};