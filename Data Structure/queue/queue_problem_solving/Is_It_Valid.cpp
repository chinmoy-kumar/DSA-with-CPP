#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<int> st;
        string str;
        cin >> str;
        for (char c : str)
        {
            if (c == '0')
            {
                if (!st.empty() && st.top() == '1')
                {
                    st.pop();
                }
                else{
                    st.push(c);
                }
            }
            else if(c == '1'){
                if(!st.empty() && st.top() == '0'){
                    st.pop();
                }
                else{
                    st.push(c);
                }
            }
        }
        if(st.empty()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}