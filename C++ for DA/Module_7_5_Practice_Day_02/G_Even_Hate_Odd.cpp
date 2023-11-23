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
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int odd = 0;
        int even = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        int cnt = n / 2;
        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else if (even > odd)
        {
            cout << (cnt - odd) << endl;
        }
        else if (odd > even)
        {
            cout << (cnt - even) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}