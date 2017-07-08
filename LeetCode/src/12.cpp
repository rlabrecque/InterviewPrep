#include "main.h"
//https://leetcode.com/problems/integer-to-roman

class Solution {
public:
	struct RomanNum {
		int num;
		char chars[3];
	};

	string intToRoman(int num) {
		static const RomanNum LUT[] = {
			{ 1000, "M" },
			{ 900, "CM" },
			{ 500, "D"  },
			{ 400, "CD" },
			{ 100, "C"  },
			{ 90, "XC"  },
			{ 50, "L"   },
			{ 40, "XL"  },
			{ 10, "X"   },
			{ 9, "IX"   },
			{ 5, "V"    },
			{ 4, "IV"   },
			{ 1, "I"    }
		};

		string s;

		while (num > 0) {
			for (int i = 0; i < sizeof(LUT); ++i) {
				if (num >= LUT[i].num) {
					num -= LUT[i].num;
					s += LUT[i].chars;
					break;
				}
			}
		}

		return s;
	}
};
