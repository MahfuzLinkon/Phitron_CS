#include <bits/stdc++.h>

using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int mx;
    if (a > b && a > c && a > d)
    {
        mx = a;
    }
    else if (b > a && b > c && b > d)
    {
        mx = b;
    }
    else if (c > a && c > b && c > d)
    {
        mx = c;
    }
    else
    {
        mx = d;
    }
    return mx;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = max_of_four(a, b, c, d);
    cout << ans;
    return 0;
}
