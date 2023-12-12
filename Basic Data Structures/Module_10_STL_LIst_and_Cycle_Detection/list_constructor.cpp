#include <bits/stdc++.h>

using namespace std;

int main()
{
    // list<int> myList;
    // list<int> myList(10);
    // list<int> list2 = {1, 2, 3, 4, 5};

    // int ar[5] = {10, 20, 30, 40, 50};

    vector<int> v = {100, 200, 300};
    list<int> myList(v.begin(), v.end());

    // cout << myList.front();
    // list<int>::iterator it;

    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    for (int x : myList)
    {
        cout << x << endl;
    }

    return 0;
}