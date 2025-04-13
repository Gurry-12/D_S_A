// Non Repeating Character

/*
Given a string s consisting of lowercase Latin Letters. Return the first non-repeating character in s. 
If there is no non-repeating character, return '$'.
Note: When you return '$' driver code will output -1.

Examples:

Input: s = "geeksforgeeks"
Output: 'f'
Explanation: In the given string, 'f' is the first character in the string which does not repeat.

Input: s = "racecar"
Output: 'e'
Explanation: In the given string, 'e' is the only character in the string which does not repeat.

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        // Your code here
        int freq[26] = {0};
        
        for (char c : s){
            freq[c - 'a']++;
        }
        
        for (char c : s){
            if (freq[c - 'a'] == 1 ){
            return c;
        }
        }
    
    return '$';
    }
};

int main()
{
    Solution obj;
    string s;
    cin >> s;
    char res = obj.nonRepeatingChar(s);
    cout << res << endl;
    return 0;

}
