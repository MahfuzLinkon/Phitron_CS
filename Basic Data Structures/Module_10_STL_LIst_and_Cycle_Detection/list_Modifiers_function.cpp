#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> myList = {1, 2, 3, 4, 5, 3, 3};

    list<int> newList = {100, 200, 300};
    // newList = myList;
    // newList.assign(myList.begin(), myList.end());
    // newList.push_back(100);
    // newList.push_front(100);

    // newList.pop_back();
    // newList.pop_front();

    // newList.insert(next(newList.begin(), 2), 100);
    // newList.insert(next(newList.begin(), 2), {100, 200, 300});
    newList.erase(next(newList.begin(), 2));

    // myList.insert(next(myList.begin(), 2), newList.begin(), newList.end());
    // myList.erase(next(myList.begin(), 1), next(myList.begin(), 4));

    // replace(myList.begin(), myList.end(), 3, 1000);

    // for (int x : myList)
    // {
    //     cout << x << endl;
    // }
    auto it = find(myList.begin(), myList.end(), 3);

    if (it == myList.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    return 0;
}