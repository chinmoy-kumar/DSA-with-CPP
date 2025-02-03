#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    map<string,int> mp;
    while(ss >> word)
    {
        mp[word]++;          
    }
    for(auto it = mp.begin(); it!=mp.end();it++) 
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}

/* Test Case - 01
--------------------
input:
I love football He loves football We love football they love football

output: 
He 1
I 1
We 1
football 4
love 3
loves 1
they 1

*/