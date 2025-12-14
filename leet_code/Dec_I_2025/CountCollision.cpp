#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countCollisions(string directions)
    {
        int n = (int)directions.size();

        // skip leading 'L's
        int left = 0;
        while (left < n && directions[left] == 'L')
            ++left;

        // skip trailing 'R's
        int right = n - 1;
        while (right >= 0 && directions[right] == 'R')
            --right;

        // all cars from left to right (inclusive) will stop
        int collisions = 0;
        for (int i = left; i <= right; ++i)
        {
            if (directions[i] != 'S') // 'S' already stopped, count only moving ones
                ++collisions;
            // counting every character (including existing 'S') also works:
            // collisions += (directions[i] != 'S' ? 1 : 0);
        }
        return collisions;

        // One-liner version (same result):
        // int collisions = 0;
        // for (int i = left; i <= right; ++i) ++collisions;  // even existing 'S' contribute 0 extra
        // return collisions - (count 'S' in [left,right] if you want, but unnecessary)
    }
};

int main(){
    Solution s1;
    string s = "RLRSLL";
    int x = s1.countCollisions(s);
    cout << x << endl;

        return 0;
}