#include "main.h"
//https://leetcode.com/problems/3sum-closest

class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());

		int closest = nums[0] + nums[1] + nums[2];

		for (int i = 0; i < nums.size() - 2;) {
			int a = nums[i];

			for (int j = i + 1, k = nums.size() - 1; j < k; ) {
				int b = nums[j];
				int c = nums[k];
				int sum = a + b + c;

				if (abs(target - closest) > abs(target - sum)) {
					if (sum == target) {
						return sum;
					}

					closest = sum;
				}

				if (sum < target) {
					while (j < k && nums[j] == b) { ++j; }
				}
				else {
					while (j < k && nums[k] == c) { --k; }
				}
			}

			while (i < nums.size() - 2 && nums[i] == a) { ++i; }
		}

		return closest;
	}
};