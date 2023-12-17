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

void print_list(Node *head)
{
    cout << "L -> ";
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void print_list_rev(Node *tail)
{
    cout << "R -> ";
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}

int size(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

void insert_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
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

void insert_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_head(head, tail, v);
            print_list(head);
            print_list_rev(tail);
        }
        else if (x == size(head))
        {
            insert_tail(head, tail, v);
            print_list(head);
            print_list_rev(tail);
        }
        else if (x < size(head))
        {
            insert_position(head, x, v);
            print_list(head);
            print_list_rev(tail);
        }
        else if (x > size(head))
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}