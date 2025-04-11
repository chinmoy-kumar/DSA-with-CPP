#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n;
    // cin >> n;
    // string s;
    // cin >> s;
    // cout << s << '\n';
    // for (int i = 0; i < n; i++)
    // {
    //     char c;
    //     cin >> c;
    //     s.push_back(c);
    // }

    // s.pop_back();

    // cout << s << '\n';
    // cout << s.front() << " " << s.back() << '\n';

    // cout << s.empty() << '\n';

    // s.clear();
    // cout << s.empty() << '\n';


    
    // Sub string    Time complexity: O(n)
    //-------------
    string s1;
    cin >> s1;
    cout << s1.substr(1, 3) << '\n';
    cout << s1.substr(2) << '\n';
    

    return 0;
}