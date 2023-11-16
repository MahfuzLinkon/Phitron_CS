#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int id;
    char name[100];
    char section;
    int total_marks;
    Student(int id, char name[], char section, int total_marks)
    {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->total_marks = total_marks;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int id;
        char name[100];
        char section;
        int total_marks;

        cin >> id >> name >> section >> total_marks;
        Student *sakib = new Student(id, name, section, total_marks);

        cin >> id >> name >> section >> total_marks;
        Student *rakib = new Student(id, name, section, total_marks);

        cin >> id >> name >> section >> total_marks;
        Student *akib = new Student(id, name, section, total_marks);

        if (sakib->total_marks > rakib->total_marks && sakib->total_marks > akib->total_marks)
        {
            cout << sakib->id << " " << sakib->name << " " << sakib->section << " " << sakib->total_marks;
        }
        else if (rakib->total_marks > sakib->total_marks && rakib->total_marks > akib->total_marks)
        {
            cout << rakib->id << " " << rakib->name << " " << rakib->section << " " << rakib->total_marks;
        }
        else if (akib->total_marks > sakib->total_marks && akib->total_marks > rakib->total_marks)
        {
            cout << akib->id << " " << akib->name << " " << akib->section << " " << akib->total_marks;
        }
        else if (sakib->total_marks == rakib->total_marks)
        {
            if (sakib->id < rakib->id)
            {
                cout << sakib->id << " " << sakib->name << " " << sakib->section << " " << sakib->total_marks;
            }
            else
            {
                cout << rakib->id << " " << rakib->name << " " << rakib->section << " " << rakib->total_marks;
            }
        }
        else if (sakib->total_marks == akib->total_marks)
        {
            if (sakib->id < akib->id)
            {
                cout << sakib->id << " " << sakib->name << " " << sakib->section << " " << sakib->total_marks;
            }
            else
            {
                cout << akib->id << " " << akib->name << " " << akib->section << " " << akib->total_marks;
            }
        }
        else if (rakib->total_marks == akib->total_marks)
        {
            if (rakib->id < akib->id)
            {
                cout << rakib->id << " " << rakib->name << " " << rakib->section << " " << akib->total_marks;
            }
            else
            {
                cout << akib->id << " " << akib->name << " " << akib->section << " " << akib->total_marks;
            }
        }
        cout << endl;
    }

    return 0;
}