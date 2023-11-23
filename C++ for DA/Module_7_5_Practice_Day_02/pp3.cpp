#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string x;
    cin >> x;
    stringstream ss(s);
    int cnt = 0;
    string word;
    while (ss >> word)
    {
        if (word == x)
        {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}