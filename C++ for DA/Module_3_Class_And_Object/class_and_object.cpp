#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{

    Student a, b;

    // char temName[100] = "Mahfuz";
    // strcpy(a.name, temName);
    // a.roll = 20;
    // a.cgpa = 3.89;
    // cout << a.name << " " << a.roll << " " << a.cgpa << endl;

    //
    // User Input
    // cin >> a.name >> a.roll >> a.cgpa;
    // cout << a.name << " " << a.roll << " " << a.cgpa << endl;

    //
    // Fullname user input
    // cin.getline(a.name, 100);
    // cin >> a.roll >> a.cgpa;
    // cout << a.name << " " << a.roll << " " << a.cgpa << endl;

    //
    // Two data input
    cin.getline(a.name, 100);
    cin >> a.roll >> a.cgpa;
    cout << a.name << " " << a.roll << " " << a.cgpa << endl;

    getchar();

    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;

    return 0;
}