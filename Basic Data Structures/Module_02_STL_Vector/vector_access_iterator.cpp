#include <bits/stdc++.h>

using namespace std;

int main ()
{
    vector<int> v = {1, 2, 2, 2, 3, 5, 6};

    // cout << v.back();

    // vector<int>:: iterator it;
    for(auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}