#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;

class Binary
{
    public:
    string convert2binary(int num){
        string res = "";
        while (num != 1){
            if (num % 2 == 1)
            res += '1';
            else
            res += '0';

            num = num / 2;
        }
        res += '1';
        reverse(res.begin() , res.end());

        return res;


    }
};

int main(){

    Binary b1;
    cout << "The No. which Binary you ant to print " << endl;
    int num = 0;
    cin >> num; //

    cout << " Binary of " << num << " is " << b1.convert2binary(num) << endl;

return 0;
}