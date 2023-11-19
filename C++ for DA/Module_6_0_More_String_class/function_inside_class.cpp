#include <bits/stdc++.h>

using namespace std;

class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    Person(string nm, int ag, int m1, int m2)
    {
        name = nm;
        age = ag;
        marks1 = m1;
        marks2 = m2;
    }
    void greet()
    {
        cout << "Hello"
             << " " << name << endl;
    }
    int total_marks()
    {
        return marks1 + marks2;
    }
};

int main()
{
    Person rakib = Person("Rakib", 26, 50, 45);

    rakib.greet();

    cout << rakib.total_marks() << endl;

    return 0;
}