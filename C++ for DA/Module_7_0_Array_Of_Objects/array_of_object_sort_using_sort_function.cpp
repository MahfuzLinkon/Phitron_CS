#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    int total_marks;
};

bool cmp(Student a, Student b)
{
    if (a.total_marks == b.total_marks)
    {
        return a.roll < b.roll;
    }
    else if (a.total_marks > b.total_marks)
    {
        return true;
    }
}

int main()
{
    int n;
    cin >> n;

    Student ar[n]; // NOrmal Array

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].roll >> ar[i].total_marks;
    }

    sort(ar, ar + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].roll << " " << ar[i].total_marks << endl;
    }

    return 0;
}