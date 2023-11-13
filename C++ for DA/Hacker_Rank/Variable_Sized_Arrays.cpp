#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, q, s = 0;

    cin >> n >> q;

    int *ar[n];

    while (n--)
    {
        int sz;
        cin >> sz;
        ar[s] = new int[sz];
        for (int i = 0; i < sz; i++)
        {
            cin >> ar[s][i];
        }
        s++;
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;

        cout << ar[a][b] << endl;
    }

    return 0;
}