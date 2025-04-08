#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<string, pair<int, pair<int, float>>> s = {"Robert", {5, {21, 3.96}}};

    // cout << s.first << " " << s.second.first << " " << s.second.second.first << " " << s.second.second.second << endl;
    // or
    string name = s.first;
    int roll = s.second.first;
    int age = s.second.second.first;
    float cgpa = s.second.second.second;
    cout << name << " " << roll << " " << age << " " << cgpa << endl;
    
    return 0;
}