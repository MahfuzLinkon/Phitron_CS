#include <bits/stdc++.h>

using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void greet()
    {
        cout << "Hello"
             << " " << name << endl;
    }
};

int main()
{
    Person rakib = Person("Rakib", 26);

    rakib.greet();

    return 0;
}