#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        // (*this).roll = roll;
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student karim(2, 5, 4.99);
    cout << karim.roll << " "
         << karim.cls << " "
         << karim.gpa << endl;

    return 0;
}