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

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void print_middle_value(Node *head, int sz)
{
    Node *tmp = head;
    int mid = sz / 2;
    if (sz % 2 == 0)
    {
        for (int i = 1; i <= mid - 1; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " " << tmp->next->val << endl;
    }
    else
    {
        for (int i = 1; i <= mid - 1; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->next->val << endl;
    }
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

    print_middle_value(head, size(head));

    return 0;
}