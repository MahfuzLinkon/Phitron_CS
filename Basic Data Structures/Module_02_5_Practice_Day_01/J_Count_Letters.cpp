#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> c(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        int index = s[i] - 'a';
        c[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (c[i] > 0)
        {
            cout << char(i + 'a') << " : " << c[i] << endl;
        }
    }

    return 0;
}