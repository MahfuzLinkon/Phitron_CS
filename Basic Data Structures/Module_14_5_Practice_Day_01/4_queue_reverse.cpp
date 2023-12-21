// Question: Take a queue of size N as input. You need to copy those elements in another queue in reverse order. You might use stack here. You should use STL to solve this problem. After copying in another queue, print the elements of that queue.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q;
    queue<int> cpyQ;
    stack<int> st;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty())
    {
        cpyQ.push(st.top());
        st.pop();
    }

    while (!cpyQ.empty())
    {
        cout << cpyQ.front() << " ";
        cpyQ.pop();
    }
    cout << endl;

    return 0;
}