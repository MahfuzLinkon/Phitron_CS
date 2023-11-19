#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string s;
    getline(cin,s);
    //
    // pass into stream 1
    // stringstream ss;
    // ss<<s;
    //
    // pass into stream 2 with constructor
    stringstream ss(s);

    string word;
    int cnt =0;
    while (ss >> word)
    {
        cout << word << endl;
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}