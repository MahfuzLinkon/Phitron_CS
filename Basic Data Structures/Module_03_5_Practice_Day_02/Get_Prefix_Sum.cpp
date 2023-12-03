#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> ar(n);
    vector<long long> preSum(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    preSum[0] = ar[0];
    for (int i = 1; i < n; i++)
    {
        preSum[i] = preSum[i - 1] + ar[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << preSum[i] << " ";
    }

    return 0;
}