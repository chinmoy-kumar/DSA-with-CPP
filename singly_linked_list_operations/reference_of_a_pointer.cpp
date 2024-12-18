#include <bits/stdc++.h>
using namespace std;

void func(int *&p){ // reference of a pointer
    p = NULL;
}

int main(){
    int x = 10;
    int *p = &x;
    func(p);
    cout <<  "In Main: " << p << endl;

    return 0;
}