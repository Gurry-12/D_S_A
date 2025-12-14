#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Your code here
    int N;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int check = 0;
    for (int y : arr)
    {
        if (y < 0)
            check += 1;
    }

    cout << check;
    return 0;
}