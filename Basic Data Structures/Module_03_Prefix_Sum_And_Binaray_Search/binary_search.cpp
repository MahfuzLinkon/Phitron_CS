#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int q;
    cin >> q;

    int l = 0;
    int r = n - 1;
    bool flag = false;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ar[mid] == q)
        {
            flag = true;
            break;
        }
        else if (ar[mid] < q)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}