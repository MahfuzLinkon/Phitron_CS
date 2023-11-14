#include <bits/stdc++.h>

using namespace std;

int main()
{
    char x;
    cin >> x;

    if (x >= 'a' && x <= 'z')
    {
        cout << "ALPHA" << endl
             << "IS SMALL";
    }
    else if (x >= 'A' && x <= 'Z')
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    }
    else if (x >= '0' && x <= '9')
    {
        cout << "IS DIGIT" << endl;
    }

    return 0;
}