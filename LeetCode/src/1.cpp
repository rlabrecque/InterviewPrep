#include "main.h"
// https://leetcode.com/problems/two-sum

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> hash;

		for (int i = 0; i < nums.size(); ++i) {
			auto it = hash.find(target - nums[i]);
			if (it != hash.end()) {
				return { it->second, i };
			}

			hash[nums[i]] = i;
		}
	}
};
