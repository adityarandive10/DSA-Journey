/*
Problem: Kth Smallest Element in a Sorted Matrix
Problem Number: 378
Platform: LeetCode
Difficulty: Medium
Topic: Arrays, Matrix, Sorting

Approach:
1. Create a vector to store all matrix elements.
2. Traverse the matrix using nested loops.
3. Insert every element into the vector.
4. Sort the vector in ascending order.
5. Return the element at index k - 1.

Time Complexity: O(N^2 log N)
Space Complexity: O(N^2)
*/

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> arr;
        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr.push_back(matrix[i][j]);
            }
        }

        sort(arr.begin(), arr.end());

        return arr[k - 1];
    }
};
