/*
Problem: Search a 2D Matrix II
Problem Number: 240
Platform: LeetCode
Difficulty: Medium
Topic: Arrays, Matrix, Binary Search

Approach:
1. Each row is sorted in ascending order.
2. Apply binary search separately on every row.
3. If the target is found in any row, return true.
4. If no row contains the target, return false.

Time Complexity: O(M * log N)
Space Complexity: O(1)

M = Number of rows
N = Number of columns
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool binarySearch(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                return true;
            }
            else if (arr[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();

        for (int i = 0; i < m; i++) {
            if (binarySearch(matrix[i], target)) {
                return true;
            }
        }

        return false;
    }
};
