#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // pair<string, int> student = make_pair("rahim", 10);
    // or
    pair<string, int> student = {"rahim", 12};
    student.first = "bablu";
    
    // cout << student.first << " " << student.second;
    // or 
    auto[name, roll] = student;
    cout << name << " " << roll;

    return 0;
}