#include<iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>

using namespace std;

class binary 
{
    public:

    string F_s_complement(string s ){

        string s1 = "";

        for (int i = 0; i < s.length(); i ++ )
        {
            if (s[i] == '1')
            s1 = s1 + '0';
            else if (s[i] == '0')
            s1 = s1 + '1';

        }

        return s1;
    }

    string decimal_2_binary(int n)
    {
        string s = "";

        while (n != 1)
        {
            if (n%2 == 1)
            s = s + "1";
            else
            s = s + "0";

            n = n/2;
        }
        s = s + "1";

    if (s.length() == 2)
    s.push_back('0');

    for (int i = s.length() ; i < 8 ; i ++ ){
        s.push_back('0');
    }

    reverse(s.begin(),s.end());

    
        return s;
    }

string S_s_complement(string& s1)
{
    
    char c = s1[s1.length()-1];
    s1.erase(s1.length()-1);
    if (c == '1')
    s1.push_back('0');
    else
    s1.push_back('1');

    return s1;
}
};

int main()
{
    binary b1;
    int num;
    cout << "Enter your no. to find its binary and 1's 2's complement:  " << endl;
    cin >> num ;

    string s = b1.decimal_2_binary(num);
    cout << "The Binary is " << s << endl;

    string s1 = b1.F_s_complement(s);
    cout << "1's complement is " << s1 << endl;

    string s2 = b1.S_s_complement(s1);
    cout << "2's complement is " << s2 << endl;


    return 0;
}