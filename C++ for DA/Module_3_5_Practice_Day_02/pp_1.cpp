#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int section;
    double math_marks;
    int cls;

    Student(char name[], int roll, int section, double math_marks, int cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    char name[100];

    strcpy(name, "Rahim Mia");
    Student *rahim = new Student(name, 1, 1, 95, 5);
    // cout << rahim->name << endl;

    strcpy(name, "Karim Mia");
    Student *karim = new Student(name, 10, 2, 89, 5);
    // cout << karim->name << endl;

    strcpy(name, "Jonas Dev");
    Student *jonas = new Student(name, 10, 2, 96, 5);
    // cout << jonas->name << endl;

    if (rahim->math_marks > karim->math_marks && rahim->math_marks > jonas->math_marks)
    {
        cout << rahim->name;
    }
    else if (karim->math_marks > rahim->math_marks && karim->math_marks > jonas->math_marks)
    {
        cout << karim->name;
    }
    else
    {
        cout << jonas->name;
    }
    delete rahim;
    delete karim;
    delete jonas;

    return 0;
}