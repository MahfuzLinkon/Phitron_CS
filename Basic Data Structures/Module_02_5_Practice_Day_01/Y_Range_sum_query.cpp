#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        int s = 0;
        for (int j = l - 1; j <= r - 1; j++)
        {
            s += ar[j];
        }
        cout << s << endl;
    }

    return 0;
}