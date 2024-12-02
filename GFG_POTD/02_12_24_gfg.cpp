/*
Search Pattern (KMP-Algorithm)
Difficulty: Medium Accuracy: 45.04% Submissions: 71K+Points: 4

Given two strings, one is a text string txt and the other is a pattern string pat. The task is to print the indexes of all the occurrences of the pattern string in the text string. Use 0-based indexing while returning the indices. 
Note: Return an empty list in case of no occurrences of pattern.

Examples :

Input: txt = "abcab", pat = "ab"
Output: [0, 3]
Explanation: The string "ab" occurs twice in txt, one starts at index 0 and the other at index 3. 

*/


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    vector <int> prefix_function(string s) {
        int n = s.size();
        vector <int> pi(n,0);
        
        for ( int i= 1 ; i<n; i++){
            int j = pi[i-1];
            while(j >0 and s[i] != s[j] )
                j = pi[j-1];
            
            if ( s[i] == s[j] ) 
                j++;
            
            pi[i] = j;
        }
        
    return pi;
    }
    vector<int> search(string& pat, string& txt) {
        // code here
        
        vector < int> prefix = prefix_function(pat);
        
        vector <int> pos;
        
        int i(0), j(0);
        
        while(i < txt.size()){
            if ( txt[i] == pat[j]){
                j++;
                i++;
            }
            else {
                if (j != 0)
                    j = prefix[j-1];
                else
                    i++;
            }
            
            if ( j == pat.size()){
                pos.push_back(i - pat.size());
            }
        }
        
        return pos;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends