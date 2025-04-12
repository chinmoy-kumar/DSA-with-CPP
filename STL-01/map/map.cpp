#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // map always keeps unique key value pairs. Key will always unique and sorted.

    map<int, int> mp;
    mp.insert({10, 20});
    // Here 1st one is key(10) and 2nd one is value(20). We can access the value with the help of key.
    // or
    mp[11] = 30;
    mp[12] = 31;
    mp[21] = 23;
    mp[32] = 25;
    mp[28] = 43;

    /*
    cout << mp[10] << '\n';
    cout << mp[11] << '\n';

    // or with range basd loop
    for(auto [key, value]: mp)
    {
        cout << key << " -> " << value  << '\n';
    }
    */
    // or
    for (auto it : mp)
    {
        int key = it.first, value = it.second;
        cout << key << " -> " << value << '\n';
    }
    cout << '\n';

    /* find()
    ----------
    // auto it = mp.find(key);
    auto it = mp.find(58);
    // cout << it -> second << '\n';

    // NOTE: if we find a key that is not present in the map, then it will return end iterator.
    if(it == mp.end())
        cout << "Key not found" << '\n';
    else
        cout << it -> first << " " << it -> second << '\n';
    */

    /* erase()
    ---------------
    mp.erase(12);
    // for (auto it : mp)
    // {
    //     int key = it.first, value = it.second;
    //     cout << key << " -> " << value << '\n';
    // }

    auto it = mp.find(12);
    if (it != mp.end())
        mp.erase(it);
    else
        cout << " is not present in map" << '\n';

    for (auto it : mp)
    {
        int key = it.first, value = it.second;
        cout << key << " -> " << value << '\n';
    }
    */
    
    // cout << mp.size() << '\n';
    // cout << mp.empty() << '\n';

    // auto it = mp.begin();
    // it++;
    // cout << it->first << " -> " << it->second << '\n';
    
    auto it = mp.lower_bound(20);
    // auto it = mp.lower_bound(28);
    // lower_bound(x) returns given key's(x) equal or greater key's iterator
    cout << it->first << " -> " << it->second << '\n';

    auto it = mp.upper_bound(28);
    // upper_bound(y) returns given key's(y) strickly greater key's iterator
    cout << it->first << " -> " << it->second << '\n';



    return 0;
}