#include <iostream>

#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        set <int> s;

        for (int i : nums){
            s.insert(i);
        }
        nums.clear();
        for (int i : s) {
            nums.push_back(i);
        }


        return s.size();


        
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1,1,2,2,3,4,5};
    int result = solution.removeDuplicates(nums);
    cout << result << endl;
    cout << nums.size() << endl;
    cout << "nums: ";
    for (int i : nums) {
        cout << i << " ";
        }
    return 0;

}
