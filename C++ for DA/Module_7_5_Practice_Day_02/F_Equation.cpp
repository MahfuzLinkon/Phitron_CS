#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> x >> n;
    double res = 0;
    for (int i = 2; i <= n; i = i + 2)
    {
        res += pow(x * 1.0, i * 1.0);
    }
    cout << (long long int)(res);

    return 0;
}