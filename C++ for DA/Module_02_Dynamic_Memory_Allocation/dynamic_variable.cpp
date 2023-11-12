#include <bits/stdc++.h>

using namespace std;

int *fun()
{
    int *x = new int;
    *x = 100;
    cout << "Fun: " << &x << endl;
    return x;
}

int main()
{
    int *a = new int;

    *a = 100;
    cout << *a << endl;

    int *b = fun();
    // int **b = fun();
    cout << "Main: " << b << endl;
    cout << "Main: " << *b << endl;

    return 0;
}