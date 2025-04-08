#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tuple<string, int, int> t = make_tuple("rahim", 10, 15);

    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << "\n";
    // or
    auto[name, roll, age] = t;
    cout << name << " " << roll << " " << age << "\n";

    tuple<string, int, int, string, float> t1 = {"rahim", 10, 15, "A", 4.55};

    auto[name1, roll1, age1, grade, gradePoint] = t1;
    cout << name1 << " " << roll1<< " " << age1 << " " << grade << " " << gradePoint  << "\n";

    return 0;
}