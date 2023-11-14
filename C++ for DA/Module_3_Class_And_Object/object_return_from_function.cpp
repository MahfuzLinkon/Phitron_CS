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

Student fun()
{
    Student karim(45, 5, 4.66);
    return karim;
}

//
// create pointer of object
// * this way does not work 
// * Need to create Dynamic object
// Student *fun()
// {
//     Student karim(45, 5, 4.66);
//     Student *p = &karim;
//     return p;
// }

int main()
{
    Student k = fun();
    // Student *k = fun();

    cout << k.roll << " " << k.cls << " " << k.gpa;
    // cout << k->roll << " " << k->cls << " " << k->gpa;
    return 0;
}