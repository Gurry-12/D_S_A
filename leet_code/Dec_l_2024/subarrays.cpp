#include <iostream>
#include <vector>
#include <unordered_map>

int numberOfSubarrays(std::vector<int>& nums, int k) {
    std::unordered_map<int, int> prefixSumCount;
    prefixSumCount[0] = 1; // Consider the initial sum of 0 to be 1 (empty subarray)
    
    int prefixSum = 0;
    int countValidSubarrays = 0;
    
    for (int num : nums) {
        prefixSum += num;
        
        // Check how many times (prefixSum - k) has appeared so far
        if (prefixSumCount.find(prefixSum - k) != prefixSumCount.end()) {
            countValidSubarrays += prefixSumCount[prefixSum - k];
        }
        
        // Update prefixSumCount map
        prefixSumCount[prefixSum]++;
    }
    
    return countValidSubarrays;
}

int main() {
    std::vector<int> nums = {1, 1, 1};
    int k = 2;
    
    std::cout << "Number of subarrays with sum " << k << ": " << numberOfSubarrays(nums, k) << std::endl;
    
    return 0;
}
