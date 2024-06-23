/*
111
222
333

basically it prints the row no. only
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the count of rows ans cols  ";
    cin >> n;

    for ( int i = 1 ; i <= n ; i ++ )
    {
        for ( int j = 1 ; j <= n ; j ++ )
        {
            cout << i;
        }
        cout << endl;
    }
return 0;
}