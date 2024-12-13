#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vrr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vrr[i];
    }
    int val;
    cin >> val;

    int l = 0;
    int r = n - 1;
    int flag = 0;

    // Binary Search----------------------
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (vrr[mid] == val)
        {
            flag = 1;
            break;
        }
        else if (vrr[mid] > val)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    //------------------------------------

    if (flag == 1)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }

    return 0;
}