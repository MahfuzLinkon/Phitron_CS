#include <bits/stdc++.h>

using namespace std;

void print_list(list<int> myList)
{
    cout << "L -> ";
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void print_list_rev(list<int> myList)
{
    cout << "R -> ";
    for (auto it = myList.rbegin(); it != myList.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> myList;
    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            myList.push_front(v);
            print_list(myList);
            print_list_rev(myList);
        }
        else if (x == 1)
        {
            myList.push_back(v);
            print_list(myList);
            print_list_rev(myList);
        }
        else if (x == 2)
        {
            if (v < myList.size())
            {
                if (v == 0)
                {
                    myList.pop_front();
                    print_list(myList);
                    print_list_rev(myList);
                }
                else if (v == (int)myList.size() - 1)
                {
                    myList.pop_back();
                    print_list(myList);
                    print_list_rev(myList);
                }
                else
                {
                    myList.erase(next(myList.begin(), v));
                    print_list(myList);
                    print_list_rev(myList);
                }
            }
            else
            {
                print_list(myList);
                print_list_rev(myList);
            }
        }
    }

    return 0;
}