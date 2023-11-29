#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 5, 6};
    vector<int> v2 = {10, 20, 30};
    // v.insert(v.begin()+1, 1000);
    v.insert(v.begin()+1, v2.begin(), v2.end());
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}