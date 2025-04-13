#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "EnjoyYourCoffee";
    int arr[] = {5, 9};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << length << endl;
    
    string v;
    int l = s.size() + length;
    cout << l << endl;
    
    int j = 0;
    for (int i = 0; i < s.size(); i++) {
        if (j < length && i == arr[j]) {
            v.push_back(' ');
            j++;
        }
        v.push_back(s[i]);
    }
    
    // If there are remaining positions in arr that are beyond the length of the string
    while (j < length) {
        v.push_back(' ');
        j++;
    }

    cout << v << endl;

    return 0;
}
