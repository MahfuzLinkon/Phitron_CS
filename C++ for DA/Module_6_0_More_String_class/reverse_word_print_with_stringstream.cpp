#include <bits/stdc++.h>

using namespace std;

void rev_print(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        rev_print(ss);
        cout << word << endl;
    }
}

int main()
{
    string s;

    getline(cin, s);

    stringstream ss(s);
    // string word;
    // while (ss >> word)
    // {
    //     cout << word << endl;
    // }
    rev_print(ss);

    return 0;
}