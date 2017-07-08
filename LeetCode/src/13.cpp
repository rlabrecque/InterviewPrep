#include "main.h"
//https://leetcode.com/problems/roman-to-integer

class Solution {
public:
	int romanCharToInt(char c) {
		switch (c) {
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
		}
	}

	int romanToInt(string s) {
		int lastValue = romanCharToInt(s[s.size() - 1]);
		int ret = lastValue;

		for (int i = s.size() - 2; i >= 0; --i) {
			int charValue = romanCharToInt(s[i]);

			ret += ((charValue < lastValue) ? -charValue : charValue);

			lastValue = charValue;
		};

		return ret;
	}
};

// Implementation with a switch LUT
/*class Solution {
public:
	int romanCharToInt(char c) {
		switch (c) {
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
		}
	}

	int romanToInt(string s) {
		int ret = 0;
		int lastValue = romanCharToInt(s[0]);
		int temp = lastValue;

		for (int i = 1; i < s.size(); ++i) {
			int charValue = romanCharToInt(s[i]);

			if (charValue > lastValue) {
				ret += (charValue - temp);
				temp = 0;
			}
			else if (charValue < lastValue) {
				ret += temp;
				temp = charValue;
			}
			else {
				temp += charValue;
			}

			lastValue = charValue;
		};

		return ret + temp;
	}
};*/

// Initial implementation.
/*class Solution {
public:
	int romanToInt(string s) {
		static unordered_map<char, int> lut = { { 'I', 1 },{ 'V', 5 },{ 'X', 10 },{ 'L', 50 },{ 'C', 100 },{ 'D', 500 },{ 'M', 1000 } };

		int ret = 0;
		int lastValue = lut[s[0]];
		int temp = lastValue;

		for (int i = 1; i < s.size(); ++i) {
			int charValue = lut[s[i]];

			if (charValue > lastValue) {
				ret += (charValue - temp);
				temp = 0;
			}
			else if (charValue < lastValue) {
				ret += temp;
				temp = charValue;
			}
			else {
				temp += charValue;
			}

			lastValue = charValue;
		};

		return ret + temp;
	}
};*/