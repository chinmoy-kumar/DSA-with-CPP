#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;

        Student(string name, int roll, int marks)
        {
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }
};
class cmp
{
    public:
        bool operator()(Student l, Student r)
        {
            return l.marks > r.marks; // if marks are always unique

            // if marks can be same
            if(l.marks > r.marks)
                return true;
            else if(l.marks < r.marks)
                return false;
            else
                return l.roll > r.roll;
        }
};
int main()
{
    priority_queue<Student,vector<Student>,cmp> pq;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string name;
        int roll,marks;
        cin >> name >> roll >> marks;
        Student obj(name,roll,marks);
        pq.push(obj);
    }
    while(!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }
    return 0;
}

/* Test Case - 01
--------------------
input:
3
sakib 25 76
rakib 12 86
akib 3 97

output: 
sakib 25 76
rakib 12 86
akib 3 97

Test Case - 02
---------------------
input: 
3
sakib 25 86
rakib 12 86
akib 3 97

output: 
rakib 12 86
sakib 25 86
akib 3 97

*/