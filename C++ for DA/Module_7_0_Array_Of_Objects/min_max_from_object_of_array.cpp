#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    int total_marks;
};

int main()
{
    int n;
    cin >> n;

    Student mn;
    mn.total_marks = INT_MAX;
    Student mx; 
    mx.total_marks = INT_MIN;

    // Student ar[n]; // NOrmal Array
    Student *ar = new Student[n]; // Dynamic object of array

    for (int i = 0; i < n; i++)
    {
        cin >>ar[i].name >> ar[i].roll >> ar[i].total_marks;
    }

    for (int i = 0; i < n; i++)
    {
        if(ar[i].total_marks < mn.total_marks)
        {
            mn = ar[i];
        }
        if(ar[i].total_marks > mx.total_marks)
        {
            mx = ar[i];
        }
    }

    cout << mn.name << " " << mn.roll << " " << mn.total_marks << endl;
    cout << mx.name << " " << mx.roll << " " << mx.total_marks << endl;
    
    

    return 0;
}