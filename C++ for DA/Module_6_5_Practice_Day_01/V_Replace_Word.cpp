#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string temp = "EGYPT";

    while (s.find(temp) != -1)
    {
        s.replace(s.find(temp), 5, " ");
    }
    cout << s;

    return 0;
}