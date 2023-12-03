#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);

    for (int &x : ar)
        cin >> x;
    vector<int> p(n);
    p[0] = ar[0];
    for (int i = 1; i < n; i++)
    {
        p[i] = ar[i] + p[i - 1];
    }

    // for (int x : p)
    //     cout << x << " ";

    int ans = -1;
    //
    // Using brute force sum
    // for (int i = 0; i < n; i++)
    // {
    //     int left = 0;
    //     int right = 0;
    //     for (int j = i - 1; j >= 0; j--)
    //     {
    //         left += ar[j];
    //     }
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         right += ar[j];
    //     }

    //     if (right == left)
    //     {
    //         ans = i;
    //         break;
    //     }
    // }
    //
    // Using prefix sum
    for (int i = 0; i < n; i++)
    {
        int left = 0;
        int right = 0;
        left = p[i] - ar[i];
        right = p[n - 1] - p[i];
        if (right == left)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}