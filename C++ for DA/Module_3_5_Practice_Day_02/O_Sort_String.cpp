#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char ch[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> ch[i];
    }

    sort(ch, ch + n);

    for (int i = 0; i < n; i++)
    {
        cout << ch[i];
    }
    
    return 0;
}