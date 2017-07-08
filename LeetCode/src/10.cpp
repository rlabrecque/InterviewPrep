#include "main.h"
//https://leetcode.com/problems/regular-expression-matching

class Solution {
public:
	bool isMatch(string s, string p) {
		return matchHere(s, p, 0, 0);
	}

private:
	bool matchHere(string& s, string& p, int sPos, int pPos) {
		if (pPos == p.size()) {
			return (sPos == s.size());
		}

		if (p[pPos + 1] == '*') {
			return matchStar(s, p, sPos, pPos);
		}

		if (sPos < s.size() && (p[pPos] == s[sPos] || p[pPos] == '.')) {
			return matchHere(s, p, sPos + 1, pPos + 1);
		}

		return false;
	}

	bool matchStar(string& s, string& p, int sPos, int pPos) {
		char c = p[pPos];
		pPos += 2;

		for (; sPos <= s.size(); ++sPos) {
			if (matchHere(s, p, sPos, pPos)) {
				return true;
			}

			if (s[sPos] != c && c != '.') {
				break;
			}
		}

		return false;
	}
};

// Recursive backtracking regex parser from http://www.drdobbs.com/architecture-and-design/regular-expressions/184410904
// Their implementation had a bug.
/*class Solution {
public:
	bool isMatch(string s, string p) {
		char * text = new char[s.size() + 1];
		memcpy(text, s.c_str(), s.size());
		text[s.size()] = '\0';
		char * re = new char[p.size() + 1];
		memcpy(re, p.c_str(), p.size());
		re[p.size()] = '\0';

		return matchhere(re, text);
	}

private:
	bool matchhere(char *re, char *text) {
		if (re[0] == '\0') {
			return (*text == '\0');
		}

		if (re[1] == '*') {
			return matchstar(re[0], re + 2, text);
		}

		if (*text != '\0' && (re[0] == '.' || re[0] == *text)) {
			return matchhere(re + 1, text + 1);
		}

		return false;
	}

	bool matchstar(char c, char *re, char *text) {
		do {
			if (matchhere(re, text)) {
				return true;
			}
		} while (*text != '\0' && (*text++ == c || c == '.'));

		return false;
	}
};*/
