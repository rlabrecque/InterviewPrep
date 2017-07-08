#include "main.h"
//https://leetcode.com/problems/valid-parentheses

class Solution {
public:
	bool isValid ( string s ) {
		static char stack[1024 * 4] = {};
		int sSize = static_cast<int>( s.size () );
		int stackPos = -1;
		for ( int i = 0; i < sSize; ++i ) {
			switch ( s[i] ) {
			case '[':
			case '{':
			case '(':
				stack[++stackPos] = s[i];
				break;
			case ']':
				if ( stackPos == -1 || stack[stackPos--] != '[' ) {
					return false;
				}
				break;
			case '}':
				if ( stackPos == -1 || stack[stackPos--] != '{' ) {
					return false;
				}
				break;
			case ')':
				if ( stackPos == -1 || stack[stackPos--] != '(' ) {
					return false;
				}
				break;
			}
		}

		return stackPos == -1;
	}
};