
/* problem: 
Description: Given an array of integers, find the equilibrium index. An equilibrium index is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.
Example:
Input 1
7
-7 1 5 2 -4 3 0
Output 1
3

Input 2
5
1 2 3 4 5
output 2
No equilibrium index found




Explanation for 1: At index 3, the sum of elements before it is -1 and after it is also -1

-7   1          5       2       -4      3       0

0	   1		2		3		4		5		6
Sum of before index 3  = -7 + 1 + 5 = -1
Sum of after index    3	  = -4 + 3 + 0 = -1

*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> v(n);
    v[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        v[i] = v[i-1] + arr[i];
    }

    int rightSide = v[n-1];
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i] == rightSide){
            cout << i;
            flag = 1;
            break;
        }
        else{
            rightSide = v[n-1] - v[i];
        }
    }
    
    if(flag == 0){
        cout << "No equilibrium index found";
    }

    return 0;
}

