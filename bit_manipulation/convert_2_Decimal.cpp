#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;

class Binary
{
    public:

    int convert2Decimal(string s){
        int num = 0;
        int power_2 = 1;

        int len = s.length();

        for (int i = len - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            num = num + power_2;
        
        power_2 = power_2 * 2;

        }

        return num;
    }
    
};

int main(){

    Binary b1;
    cout << "The No. which Decimal you ant to print " << endl;
    string s = "";
    cin >> s; //

    cout << "Decimal of " << s << " is " << b1.convert2Decimal(s) << endl;

return 0;
}