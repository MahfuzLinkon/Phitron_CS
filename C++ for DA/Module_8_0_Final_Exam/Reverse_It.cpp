#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Student ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].nm >> ar[i].cls >> ar[i].s >> ar[i].id;
    }

    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(ar[i].s, ar[j].s);
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].nm << " " << ar[i].cls << " " << ar[i].s << " " << ar[i].id << endl;
    }

    return 0;
}