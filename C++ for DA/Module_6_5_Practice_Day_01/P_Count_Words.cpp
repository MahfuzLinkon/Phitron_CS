#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int cnt = 0;
    bool inside_word = false;

    for (char c : s)
    {
        if (isalpha(c) > 0)
        {
            if (inside_word == false)
            {
                cnt++;
                inside_word = true;
            }
        }
        else{
            inside_word = false;
        }
        
    }

    cout << cnt;
    return 0;
}