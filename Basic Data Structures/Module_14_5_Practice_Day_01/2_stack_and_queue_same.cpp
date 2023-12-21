// Question: Take a stack of size N and a queue of size M as input. Then check if both of them are the same or not in the order of removing. You should use STL to solve this problem.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    // while (!st.empty())
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }
    // cout << endl;

    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }

    bool flag = true;

    if (st.size() != q.size())
    {
        flag = false;
    }
    else
    {
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }

    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}