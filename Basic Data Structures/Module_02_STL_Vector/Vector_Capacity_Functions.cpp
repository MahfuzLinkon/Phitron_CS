#include <bits/stdc++.h>

using namespace std;

int main ()
{
    vector<int> v;

    v.push_back(20);
    v.push_back(10);
    v.push_back(50);
    v.push_back(100);

    v.resize(7, 300);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    

    return 0;
}