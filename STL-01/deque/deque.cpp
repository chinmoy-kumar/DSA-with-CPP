#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i <= n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }

    for(auto value : dq)
    {
        cout << value << " ";
    }
    cout << "\n";

    dq.push_front(3);
    dq.push_front(2);
    dq.pop_front();
    dq.pop_back();

    for(auto value : dq)
    {
        cout << value << " ";
    }
    cout << "\n";

    cout << dq.front() << " " << dq.back() << "\n";

    // speciality of deque than vector
    // almost all function of vector works in deque
    // push_back(), pop_back(), back();
    // push_front(), pop_front(), front();
    // time complexity: O(1);
    // cons: it uses more extra memory almost double than vector

    

    return 0;
}