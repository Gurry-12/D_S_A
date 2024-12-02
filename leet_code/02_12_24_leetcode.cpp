/* Given a `sentence` that consists of some words separated by a **single space**, and a `searchWord`, check if `searchWord` is a prefix of any word in `sentence`.

Return *the index of the word in* `sentence` *(**1-indexed**) where* `searchWord` *is a prefix of this word*. If `searchWord` is a prefix of more than one word, return the index of the first word **(minimum index)**. If there is no such word return `-1`.

A **prefix** of a string `s` is any leading contiguous substring of `s`.

**Example 1:**

```
Input: sentence = "i love eating burger", searchWord = "burg"
Output: 4
Explanation: "burg" is prefix of "burger" which is the 4th word in the sentence.

```
*/

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {

        map<int, string> m;
        int i = 1; 
        stringstream ss(sentence);
        string word;

          while (ss >> word) {
            m[i] = word;
            i++;
        }

        for (auto &pr : m) {
            if (pr.second.find(searchWord) == 0) { 
                return pr.first; 
            }
        }

        return -1; 
        
    }
};


int main(){
    Solution s;
    string sentence = "i love eating burger";
    string searchWord = "burg";
    cout << s.isPrefixOfWord(sentence, searchWord) << endl;
    return 0;
    
}