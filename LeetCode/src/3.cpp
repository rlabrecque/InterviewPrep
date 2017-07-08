#include "main.h"
//https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int dict[128];
		memset(dict, -1, sizeof(dict));

		int maxLen = 0;
		int start = -1;

		for (int i = 0; i != s.length(); ++i) {
			start = max(start, dict[s[i]]);

			dict[s[i]] = i;
			maxLen = max(maxLen, i - start);
		}

		return maxLen;
	}
};
