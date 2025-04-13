/*
You are given an integer array banned and two integers n and maxSum. You are choosing some number 
of integers following the below rules:

    The chosen integers have to be in the range [1, n].
    Each integer can be chosen at most once.
    The chosen integers should not be in the array banned.
    The sum of the chosen integers should not exceed maxSum.

Return the maximum number of integers you can choose following the mentioned rules.



Example 1:

Input: banned = [1,6,5], n = 5, maxSum = 6
Output: 2
Explanation: You can choose the integers 2 and 4.
2 and 4 are from the range [1, 5], both did not appear in banned, and their sum is 6, which did not exceed maxSum.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <map>
#include <queue>
using namespace std;

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        // Sort banned array to enable binary search
        sort(banned.begin(), banned.end());

        int count = 0;

        // Try each number from 1 to n
        for (int num = 1; num <= n; num++) {
            // Skip if number is in banned array
            if (customBinarySearch(banned, num)) continue;

            maxSum -= num;

            // Break if sum exceeds our limit
            if (maxSum < 0) break;

            count++;
        }
        return count;
    }

private:
    // Helper method to check if value exists in sorted array
    bool customBinarySearch(vector<int>& arr, int target) {
        int left = 0;
        int right = arr.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target) return true;

            if (arr[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return false;
    }
};


int main() {
    Solution solution;
    vector<int> banned = {2, 3, 4};
    int n = 5;
    int maxSum = 7;
    cout << solution.maxCount(banned, n, maxSum) << endl;
    return 0;

}