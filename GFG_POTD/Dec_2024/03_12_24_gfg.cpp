//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  

    vector<int> prefix_function(string& s2) {
    int n = s2.size();
    vector<int> pi(n,0);
    
    for ( int i = 1; i < n ; i ++) {
        int j = pi[i-1];
        while (j > 0 and s2[i] != s2[j])
            j = pi[j-1];
        
        if (s2[i] == s2[j])
            j++;
        
        pi[i] = j;
    }
    
    return pi;
}
    int minChar(string& s) {
        // Write your code here
        string rev = string(s.rbegin(), s.rend());
        
        string s1 = s + "$" + rev;
        
        vector<int> lps = prefix_function(s1);

        
        int max1 = *max_element(lps.begin(), lps.end());
        
        int min_char1 = s.size() - max1 ;
        
        return min_char1;
    }
};


//{ Driver Code Starts.
int main() {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.minChar(str);
        cout << ans << endl;

        cout << "~" << "\n";
    return 0;
}

// } Driver Code Ends