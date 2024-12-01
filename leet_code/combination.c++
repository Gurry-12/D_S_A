#include <iostream>
#include <vector>
#include <algorithm>

void findCombinations(int start, int target, std::vector<int>& candidates, std::vector<int>& currentCombination, std::vector<std::vector<int>>& result) {
    // Base case: if the target is 0, add the current combination to the result
    if (target == 0) {
        result.push_back(currentCombination);
        return;
    }

    // Iterate over the candidates starting from 'start' index
    for (int i = start; i < candidates.size(); ++i) {
        // Skip duplicates
        if (i > start && candidates[i] == candidates[i - 1]) {
            continue;
        }

        // If the current candidate is greater than the target, break the loop
        if (candidates[i] > target) {
            break;
        }

        // Include the candidate in the current combination
        currentCombination.push_back(candidates[i]);

        // Recur with the reduced target and the next index
        findCombinations(i + 1, target - candidates[i], candidates, currentCombination, result);

        // Backtrack: remove the last candidate from the combination
        currentCombination.pop_back();
    }
}

std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target) {
    // Sort the candidates to handle duplicates
    std::sort(candidates.begin(), candidates.end());

    std::vector<std::vector<int>> result;
    std::vector<int> currentCombination;

    // Start backtracking from index 0
    findCombinations(0, target, candidates, currentCombination, result);

    return result;
}

int main() {
    std::vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;

    std::vector<std::vector<int>> result = combinationSum2(candidates, target);

    // Print the result
    for (const auto& combination : result) {
        for (int num : combination) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
