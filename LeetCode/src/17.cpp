#include "main.h"
//https://leetcode.com/problems/letter-combinations-of-a-phone-number

class Solution {
public:
	const vector<string> test = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

	vector<string> letterCombinations( string digits ) {
		vector<string> ret;
		if ( digits.size() == 0 ) { return ret; }
		for ( int i = 0; i < digits.size(); ++i ) {
			int digit = digits[i] - '0';

			vector<string> tmp;
			for ( int j = 0; j < test[digit].size(); ++j ) {
				if ( ret.size() == 0 ) {
					tmp.push_back( string( 1, test[digit][j] ) );
				}
				else {
					for ( int k = 0; k < ret.size(); ++k ) {
						tmp.push_back( ret[k] + test[digit][j] );
					}
				}
			}

			ret = tmp;
		}

		return ret;
	}
};
