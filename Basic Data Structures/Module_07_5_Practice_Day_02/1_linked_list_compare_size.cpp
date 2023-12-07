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

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
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
        insert_tail(head1, tail1, v);
    }
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_tail(head2, tail2, v);
    }

    // print_list(head1);
    // print_list(head2);

    if (size(head1) == size(head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}