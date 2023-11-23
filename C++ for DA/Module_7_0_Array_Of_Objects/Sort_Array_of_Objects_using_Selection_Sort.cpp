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

    Student ar[n]; // NOrmal Array

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].roll >> ar[i].total_marks;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i].total_marks < ar[j].total_marks)
            {
                swap(ar[i], ar[j]);
            }
            if (ar[i].total_marks == ar[j].total_marks)
            {
                if (ar[i].roll > ar[j].roll)
                {
                    swap(ar[i], ar[j]);
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].roll << " " << ar[i].total_marks << endl;
    }

    return 0;
}