#include "main.h"
//https://leetcode.com/problems/median-of-two-sorted-arrays/

// O(log(min(n+m)) version with binary search.
class Solution {
public:
	double findMedianSortedArrays( vector<int>& nums1, vector<int>& nums2 ) {
		int size1 = nums1.size();
		int size2 = nums2.size();

		// Always make sure the first array is always the smaller one.
		if ( size1 > size2 ) {
			return findMedianSortedArrays( nums2, nums1 );
		}

		// Binary search
		int midCombined = (size1 + size2 - 1) / 2;
		int left = 0;
		int right = size1;
		while ( left < right ) {
			int mid1 = (left + right) / 2;
			int mid2 = midCombined - mid1;
			if ( nums1[mid1] < nums2[mid2] ) {
				left = mid1 + 1;
			}
			else {
				right = mid1;
			}
		}

		// The median is now one of these 4 numbers: nums1[left-1], nums1[left], nums2[k-left], or nums2[k-left+1]

		// If (n+m) is odd, the median is the larger of nums1[left-1] and nums2[k-left], and we tackle some corner cases here
		int a = max( left > 0 ? nums1[left - 1] : 0, midCombined - left >= 0 ? nums2[midCombined - left] : 0 );
		if ( ((size1 + size2) & 1) == 1 ) {
			return (double)a;
		}
		else {
			// If (n+m) is even, the median can be calculated by median = (max(nums1[left-1], nums2[k-left]) + min(nums1[left], nums2[k-left+1]) / 2.0
			// And we tackle some more corner cases.
			int b = min( left < size1 ? nums1[left] : INT_MAX, midCombined - left + 1 < size2 ? nums2[midCombined - left + 1] : INT_MAX );
			return (a + b) / 2.0;
		}
	}
};

// Initial O(m+n) solution.
/*class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int totalSize = nums1.size() + nums2.size();

		int last;
		int secondlast;

		int i = 0;
		int j = 0;
		while ((i + j) < (totalSize / 2) + 1) {
			if (i < nums1.size() && j < nums2.size()) {
				if (nums2[j] < nums1[i]) {
					secondlast = last;
					last = nums2[j++];
				}
				else {
					secondlast = last;
					last = nums1[i++];
				}
			}
			else if (i < nums1.size()) {
				secondlast = last;
				last = nums1[i++];
			}
			else {
				secondlast = last;
				last = nums2[j++];
			}
		}

		if (totalSize % 2 != 0) {
			return last;
		}
		else {
			return (double)(secondlast + last) / 2.0;
		}
	}
};*/
