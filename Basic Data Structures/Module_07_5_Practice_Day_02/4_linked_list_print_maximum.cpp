#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int maximum_value(Node *head)
{
    Node *tmp = head;
    int mx = INT_MIN;
    while (tmp != NULL)
    {
        if (tmp->val > mx)
        {
            mx = tmp->val;
        }
        tmp = tmp->next;
    }
    return mx;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_tail(head, tail, v);
    }

    cout << maximum_value(head) << endl;

    return 0;
}