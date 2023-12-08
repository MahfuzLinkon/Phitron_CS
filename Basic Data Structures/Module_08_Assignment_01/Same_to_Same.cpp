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

void insert_node(Node *&head, Node *&tail, int v)
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

void check_node(Node *head1, Node *head2, int sz1, int sz2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    bool flag = true;

    if (sz1 != sz2)
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = 0; i < sz1; i++)
    {
        if (tmp1->val != tmp2->val)
        {
            flag = false;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_node(head1, tail1, v);
    }
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_node(head2, tail2, v);
    }

    check_node(head1, head2, size(head1), size(head2));

    return 0;
}