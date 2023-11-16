#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch[100001];
    while (cin.getline(ch, 100001))
    {
        int n = strlen(ch);

        sort(ch, ch + n);
        for (int i = 0; i < n; i++)
        {
            if (ch[i] != ' ')
            {
                cout << ch[i];
            }
        }
        cout << endl;
    }

    return 0;
}