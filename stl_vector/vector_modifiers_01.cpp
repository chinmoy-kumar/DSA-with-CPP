#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2;
    v2 = v;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    // push_back();
    vector<int> v4 = {1, 2, 3, 4, 5};
    v4.push_back(100);
    for (int x : v4)
    {
        cout << x << " ";
    }
    cout << endl;

    // pop_back()
    vector<int> v3 = {1, 2, 3, 4, 5};
    v3.pop_back();
    v3.pop_back();
    for (int x : v3)
    {
        cout << x << " ";
    }
    cout << endl;

    // insert()
    vector<int> v5 = {1, 2, 3, 4, 5};
    v5.insert(v5.begin() + 2, 105); // single insert
    for (int x : v5)
    {
        cout << x << " ";
    }
    cout << endl;

    vector<int> v6 = {1, 2, 3, 4, 5};
    vector<int> v7 = {200, 300, 400};
    v6.insert(v6.begin() + 2, v7.begin(), v7.end()); // multiple insert
    for (int x : v6)
    {
        cout << x << " ";
    }
    cout << endl;

    // erase()
    vector<int> v8 = {1, 2, 3, 4, 5};
    v8.erase(v8.begin() + 1); // single erase
    for (int x : v8)
    {
        cout << x << " ";
    }
    cout << endl;

    vector<int> v9 = {1, 2, 3, 4, 5};
    v9.erase(v9.begin() + 1, v9.begin() + 4); // multiple erase
    for (int x : v9)
    {
        cout << x << " ";
    }
    cout << endl;

    // replace()
    vector<int> v10 = {1, 2, 3, 2, 5, 2};
    // replace(start_range, end_range, element_to_replace, element_with_replace);
    replace(v10.begin(), v10.end(), 2, 500);
    for(int x : v10){
        cout << x << " ";
    }
    cout << endl;

    // find()
    vector<int> v11 = {1, 2, 3, 100, 5};
    // vector<int>:: iterator it = find(v11.begin(), v11.end(), 100);
    // shortcut: 
    auto it = find(v11.begin(), v11.end(), 100);
    if(it == v11.end()){
        cout << "Not Found";
    }
    else{
        cout << "Found";
    }
    cout << endl;



    return 0;
}