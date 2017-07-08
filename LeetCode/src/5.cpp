#include "main.h"
//https://leetcode.com/problems/longest-palindromic-substring

// Expand from center
string longestPalindrome(string s) {
	int longestStart = 0;
	int longestLength = 0;
	int longestOffset = 0;
	if (s.size() < 2) {
		return s;
	}

	for (int center = 1; center < s.size(); ++center) {
		int offset = 0;
		int offset2 = 0;
		bool abort1 = false;
		bool abort2 = false;
		while (!abort1 || !abort2) {
			if ((center - offset >= 0 && center + offset <= s.size()) && (s[center - offset] == s[center + offset])) {
				++offset;
			}
			else {
				abort1 = true;
			}

			if ((center - 1 - offset2 >= 0 && center + offset2 <= s.size()) && (s[center - 1 - offset2] == s[center + offset2])) {
				++offset2;
			}
			else {
				abort2 = true;
			}
		}

		if ((offset * 2) - 1 > longestLength) {
			longestOffset = offset;
			longestStart = center - offset + 1;
			longestLength = (offset * 2) - 1;
		}

		if ((offset2 * 2) > longestLength) {
			longestOffset = offset2 + 1;
			longestStart = center - 1 - offset2 + 1;
			longestLength = (offset2 * 2);
		}
	}

	return s.substr(longestStart, longestLength);
}

// Brute force implementation
// Basically checks every single substring and sees if it fits.
/*class Solution {
public:
	string longestPalindrome(string s) {
		int longestStart = 0;
		int longestLength = 0;

		for (int start = 0; start < s.size(); ++start) {
		    if(s.size() - start < longestLength) {
		        break;
		    }
		    
			for (int endoffset = 0; s.size() - endoffset > start; ++endoffset) {
				int length = s.size() - start - endoffset;

				bool bIsPalindrome = true;
				for (int i = 0; i < length / 2; ++i) {
					if (s[start + i] != s[start + ((length - 1) - i)]) {
						bIsPalindrome = false;
						break;
					}
				}

				if (bIsPalindrome) {
					if (length > longestLength) {
						longestStart = start;
						longestLength = length;
					}
					break;
				}
			}
		}

		return s.substr(longestStart, longestLength);
	}
};*/