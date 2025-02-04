#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    // NOTE: STL -> Standard Template Library

    // type-01:
        vector<int> v;
        cout << v.size() << endl;

    // type-02:
        vector<int> v1(10);
        cout << v1.size() << endl;

    // type-03: 
        vector<int> v2(5, -1);
        for (int i = 0; i < v2.size(); i++)
        {
            cout << v2[i] << " ";
        }
        cout << endl;

    // type-04: 
        vector<int> v3(v2); // copy a vector in another vector
        for (int i = 0; i < v3.size(); i++)
        {
            cout << v3[i] << " ";
        }
        cout << endl;

    // type-05:
        int arr[5] = {1, 2, 3, 4, 5};
        vector<int> v4(arr, arr+5);
        for (int i = 0; i < v4.size(); i++)
        {
            cout << v4[i] << " ";
        }
        cout << endl;

    // type-06:
        vector<int> v5 = {6, 7, 8, 9, 10};
        for (int i = 0; i < v5.size(); i++)
        {
            cout << v5[i] << " ";
        }
        cout << endl;

    return 0;
}

// NOTE URL: https://drive.google.com/file/d/1igNjhR0xjHaB4P8PadSX_VssZGGFgKMy/view?usp=sharing