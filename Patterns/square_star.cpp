/*
***
***
***
*/

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the count of row and cols  ";
    cin >> n;

    // main code 
    for ( int i = 0 ; i < n ; i ++ )
    {
        for( int j = 0 ; j < n ; j ++ )
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;

}

