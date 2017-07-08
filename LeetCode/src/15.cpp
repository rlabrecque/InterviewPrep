#include "main.h"
//https://leetcode.com/problems/3sum

class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> ret;
		ret.reserve(16258);

		if (nums.size() < 3) { return ret; }

		sort(nums.begin(), nums.end());

		for (int i = 0; i < nums.size() - 2 && nums[i] <= 0; ) {
			int a = nums[i];

			for (int j = i + 1, k = nums.size() - 1; j < k; ) {
				int b = nums[j];
				int c = nums[k];
				int sum = a + b + c;

				if (sum == 0) {
					ret.push_back({ a, b, c });
					while (j < k && nums[j] == b) { ++j; }
					while (j < k && nums[k] == c) { --k; }
				}
				else if (sum < 0) {
					while (j < k && nums[j] == b) { ++j; }
				}
				else {
					while (j < k && nums[k] == c) { --k; }
				}
			}

			while (i < nums.size() - 1 && nums[i] == a && nums[i] <= 0) { ++i; }
		}

		return ret;
	}
};

// Initial attempt, one if the slowest things I've ever created.
/*class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> ret;
		if (nums.size() < 3) { return ret; }

		sort(nums.begin(), nums.end());

		set<int> seen;

		for (int i = 0; i < nums.size() - 1; ++i) {
			for (int j = i + 1; j < nums.size(); ++j) {
				if (seen.find((-(nums[i] + nums[j]))) != seen.end()) {
					bool bHasDupes = false;
					for (int omg = 0; omg < ret.size(); ++omg) {
						if (ret[omg][0] == nums[i] && ret[omg][1] == nums[j] && ret[omg][2] == -(nums[i] + nums[j])) {
							bHasDupes = true;
							break;
						}
					}

					if (!bHasDupes) {
						ret.push_back({ nums[i], nums[j], -(nums[i] + nums[j]) });
					}
				}
			}

			seen.insert(nums[i]);
		}

		return ret;
	}
};*/