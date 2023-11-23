#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int frq[26] = {0};
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            // int ind = ;
            if (frq[s[i] - 65] == 1)
            {
                cnt += 1;
            }
            else
            {
                cnt += 2;
                frq[s[i] - 65] = 1;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}