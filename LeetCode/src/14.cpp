#include "main.h"
//https://leetcode.com/problems/longest-common-prefix

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.size() == 0) { return ""; }

		string ret = strs[0];

		for (int i = 1; i < strs.size(); ++i) {
			string& s = strs[i];
			for (int j = 0; j < ret.size(); ++j) {
				if (s[j] != ret[j]) {
					ret = ret.substr(0, j);
					break;
				}
			}
		}

		return ret;
	}
};