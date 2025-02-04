#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list;
    int num;
    while (1)
    {
        cin >> num;
        if (num == -1)
        {
            break;
        }

        list.push_back(num);
    }

    // print
    for(int val : list){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

/* 
Sample Input: 1 2 3 4 5 -1

Sample Output: 1 2 3 4 5
*/