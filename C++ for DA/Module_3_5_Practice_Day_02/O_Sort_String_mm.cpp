#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char ch[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ch[i] > ch[j])
            {
                swap(ch[i], ch[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ch[i];
    }

    return 0;
}