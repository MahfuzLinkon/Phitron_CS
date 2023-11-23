#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int l = 0;
        int h = 0;
        for (int i = 0; i < 6; i++)
        {
            if (i > 2)
            {
                h += s[i];
            }
            else
            {
                l += s[i];
            }
        }
        if (l == h)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}