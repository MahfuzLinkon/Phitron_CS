#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int feq[26] = {0};

    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        int val = ch - 97;
        feq[val]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (feq[i] > 0)
        {
            for (int j = 0; j < feq[i]; j++)
            {
                cout << char(i + 97);
            }
        }
    }

    return 0;
}