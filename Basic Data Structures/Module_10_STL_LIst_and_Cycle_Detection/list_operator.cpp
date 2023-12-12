#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50, 10, 10, 10};
    // myList.remove(10);

    // myList.sort(greater<int>());
    // myList.sort();
    // myList.unique();

    myList.reverse();

    for (int x : myList)
    {
        cout << x << endl;
    }

    return 0;
}