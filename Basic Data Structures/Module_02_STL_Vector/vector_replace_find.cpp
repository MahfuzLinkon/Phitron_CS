#include <bits/stdc++.h>

using namespace std;

int main()
{
    //
    // Replace
    vector<int> v = {1, 2, 2, 2, 3, 5, 6};

    // replace(v.begin(), v.end(), 2, 100);

    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    //
    // Find
    // vector<int>:: iterator it;
    // it = find(v.begin(), v.end(), 6);

    auto it = find(v.begin(), v.end(), 16);

    if (it == v.end())
    {
        cout << "Not Found!";
    }
    else
    {
        cout << "Found!";
    }

    // cout << *it << endl;
    return 0;
}