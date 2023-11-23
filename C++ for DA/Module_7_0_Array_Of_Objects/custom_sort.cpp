#include <bits/stdc++.h>

using namespace std;

class Freq
{
public:
    char value;
    int count;
};

bool cmp(Freq a, Freq b)
{
    if (a.count == b.count)
    {
        return a.value<b.value;
    }
    else
    {
        return a.count > b.count;
    }
}

int main()
{
    string s;
    cin >> s;
    Freq ar[26];
    for (int i = 0; i < 26; i++)
    {
        ar[i].count = 0;
        ar[i].value = char(i + 'a');
    }

    for (int i = 0; i < s.size(); i++)
    {
        ar[s[i] - 'a'].count++;
    }

    sort(ar, ar + 26, cmp);

    for (int i = 0; i < 26; i++)
    {
        if (ar[i].count > 0)
        {
            for (int j = 0; j < ar[i].count; j++)
            {
                cout << ar[i].value;
            }
        }
    }

    return 0;
}