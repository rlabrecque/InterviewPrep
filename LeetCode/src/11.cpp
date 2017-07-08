#include "main.h"
//https://leetcode.com/problems/container-with-most-water

class Solution {
public:
	int maxArea(vector<int>& height) {
		int area = 0;
		int x = height.size() - 1;
		int y = 0;
		while (y < x) {
			if (height[x] > height[y]) {
				area = max(area, height[y] * (x - y));
				++y;
			}
			else {
				area = max(area, height[x] * (x - y));
				--x;
			}
		}

		return area;
	}
};