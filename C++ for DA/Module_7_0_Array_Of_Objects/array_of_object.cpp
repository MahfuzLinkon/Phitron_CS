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

    // Student ar[n]; // NOrmal Array
    Student *ar = new Student[n]; // Dynamic object of array

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, ar[i].name);
        cin >> ar[i].roll >> ar[i].total_marks;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].roll << " " << ar[i].total_marks << endl;
    }

    return 0;
}