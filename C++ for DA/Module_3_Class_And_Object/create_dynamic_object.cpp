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
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student *fun()
{
    Student *r = new Student(100, 9, 3.66);
    return r;
}

int main()
{
    // Create Dynamic Object
    Student *k = new Student(15, 6, 4.22);
    cout << k->roll << " " << k->cls << " " << k->gpa << endl;

    // Dynamic Object Return From function
    Student *r = fun();
    cout << r->roll << " " << r->cls << " " << r->gpa << endl;
    delete r;
    cout << r->roll << " " << r->cls << " " << r->gpa << endl;

    return 0;
}