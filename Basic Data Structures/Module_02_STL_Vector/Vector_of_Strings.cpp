#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);

    // for (string &val : v)
    // {
    //     cin >> val;
    // }

    // for (string val : v)
    // {
    //     cout << val << endl;
    // }
    cin.ignore();
    for (string &val : v)
    {
        getline(cin, val);
    }

    for (string val : v)
    {
        cout << val << endl;
    }

    return 0;
}