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

    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] == ar[j])
            {
                flag = true;
                break;
            }
        }
    }

    if (flag == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}