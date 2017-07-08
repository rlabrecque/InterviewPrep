#include "main.h"
//https://leetcode.com/problems/zigzag-conversion

class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows <= 1) { return s; }

		vector<string> outRows(numRows);

		for (int i = 0, line = 0, dir = -1; i < s.size(); ++i, line += dir) {
			if (line == 0 || line == (numRows - 1)) { dir = -dir; }

			outRows[line] += s[i];
		}

		string out;
		out.reserve(s.size());
		for (int i = 0; i < numRows; ++i) {
			out += outRows[i];
		}

		return out;
	}
};