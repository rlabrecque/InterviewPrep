#include "main.h"
//https://leetcode.com/problems/palindrome-number

class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0) { return false; }
		if (x < 10) { return true; }
		if (x % 10 == 0) { return false; }

		int sum = 0;
		while (x > sum) {
			sum = (sum * 10) + (x % 10);
			x /= 10;
		}

		return ((x == sum) || (x == sum / 10));
	}
};

// Initial attempt to get the number of digits first using a LUT
/*class Solution {
public:
	
		
	int getNumDigits(int num) {
		static const long long lut[11] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000 };
		for(int i = 1; i < sizeof(lut); ++i) {
			if(num < lut[i]) return i;
		}
		
		return 0;
	}

	long long pow10(int i) {
		static const long long lut[11] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000 };
		return lut[i];
	}

	bool isPalindrome(int x) {
		if(x < 0) { return false; }
		
		int nDigits = getNumDigits(x);
		
		for(int i = 0; i < nDigits / 2; ++i) {
			int digit1 = x % pow10(i+1) / pow10(i);
			int digit2 = x % pow10(nDigits-i) / pow10(nDigits-1-i);
			if(digit1 != digit2) {
				return false;
			}
		}
		
		return true;
	}
};*/
