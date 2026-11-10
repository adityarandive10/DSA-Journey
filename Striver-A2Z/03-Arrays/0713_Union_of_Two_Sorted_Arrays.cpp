/*
Problem: Union of Two Sorted Arrays
Problem Number: 713
Platform: Striver A2Z Sheet
Difficulty: Easy
Topic: Arrays, Two Pointers

Approach:
- Use two pointers i and j to traverse both sorted arrays.
- Compare the current elements.
- Insert the smaller element into the result.
- If both elements are equal, insert only once and move both pointers.
- Avoid duplicates using result.back().
- Append remaining elements from either array.

Time Complexity: O(N + M)
Space Complexity: O(N + M) including result array.
*/

vector<int> findUnion(vector<int>& nums1, vector<int>& nums2) {
    vector<int> result;

    int i = 0;
    int j = 0;

    while (i < nums1.size() && j < nums2.size()) {

        if (nums1[i] < nums2[j]) {
            if (result.empty() || result.back() != nums1[i]) {
                result.push_back(nums1[i]);
            }
            i++;
        }

        else if (nums1[i] > nums2[j]) {
            if (result.empty() || result.back() != nums2[j]) {
                result.push_back(nums2[j]);
            }
            j++;
        }

        else {
            if (result.empty() || result.back() != nums1[i]) {
                result.push_back(nums1[i]);
            }
            i++;
            j++;
        }
    }

    while (i < nums1.size()) {
        if (result.empty() || result.back() != nums1[i]) {
            result.push_back(nums1[i]);
        }
        i++;
    }

    while (j < nums2.size()) {
        if (result.empty() || result.back() != nums2[j]) {
            result.push_back(nums2[j]);
        }
        j++;
    }

    return result;
}
