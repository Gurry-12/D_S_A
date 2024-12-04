#include <iostream>

using namespace std;

class Solution {
public:
    bool canMakeSubsequence(string source, string target) {
        int targetIdx = 0;
        int targetLen = target.length();
        for (char currChar : source) {
            if (targetIdx < targetLen && (target[targetIdx] - currChar + 26) % 26 <= 1) {
                targetIdx++;
            }
        }
        return targetIdx == targetLen;
    }
};

int main(int argc, char **argv) {
    Solution solution;
    string source = "abcabcabc";
    string target = "abc";
    cout << boolalpha << solution.canMakeSubsequence(source, target) << endl;
    return 0;
    
}