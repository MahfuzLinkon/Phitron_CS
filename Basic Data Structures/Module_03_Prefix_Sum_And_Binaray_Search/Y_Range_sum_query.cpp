#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    long long int pre[n];
    pre[0] = ar[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + ar[i];
    }

    for (int i = 0; i < q; i++)
    {
        long long int l, r;
        cin >> l >> r;
        l--;
        r--;
        long long int s = 0;
        if (l == 0)
        {
            s = pre[r];
        }
        else
        {
            s = pre[r] - pre[l - 1];
        }
        cout << s << endl;
    }

    return 0;
}