// Question: Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL to solve this problem.

#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        // Node *delNode = head;
        // head = head->next;
        // if (head == NULL)
        // {
        //     tail = NULL;
        //     delete delNode;
        //     return;
        // }
        // head->prev = NULL;
        // delete delNode;
        Node *delNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
            delete delNode;
            return;
        }
        tail->next = NULL;
        delete delNode;
    }

    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack st1, st2;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st1.push(val);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }
    bool flag = true;

    if (st1.size() != st2.size())
    {
        flag = false;
    }
    else
    {
        while (!st1.empty())
        {
            if (st1.top() != st2.top())
            {
                flag = false;
                break;
            }
            st1.pop();
            st2.pop();
        }
    }

    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}