// User function Template for C#

class Solution {
    // Complete this function
    // Function to check if an array is a subset of another array.
    public bool isSubset(int[] a, int[] b) {
        // Your code here
        int count = 0;
        for(int i = 0; i< b.Count(); i++){
            for(int j = i; j < b.Count() ; j++){
                 if(b[i] == a[j])
                 {
                    count += 1;
                    break;
                }
            }
        }
        
        if(count == b.Count()){
            return true;
        }
        else{
            return false;
        }
    }
}