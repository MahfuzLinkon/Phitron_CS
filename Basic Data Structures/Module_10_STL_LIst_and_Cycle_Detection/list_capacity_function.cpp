#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> myList = {10, 20, 30};
    // cout << myList.max_size() << endl;

    // myList.clear();
    // cout << myList.size() << endl;
    myList.resize(2);
    myList.resize(5, 100);
    for (int x : myList)
    {
        cout << x << endl;
    }
    myList.clear();
    if (!myList.empty())
    {
        cout << "I am full !" << endl;
    }
    return 0;
}