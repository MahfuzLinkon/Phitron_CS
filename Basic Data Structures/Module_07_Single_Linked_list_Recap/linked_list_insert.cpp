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

void insert_at(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);

    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    print_list(head);
    cout << "Tail: " << tail->val << endl;

    int pos, v;
    cin >> pos >> v;
    // cout << size(head) << endl;

    if (pos == 0)
    {
        insert_head(head, v);
    }
    else if (pos == size(head))
    {
        insert_tail(head, tail, v);
    }
    else if (pos > size(head))
    {
        cout << "Invalid index" << endl;
    }
    else
    {
        insert_at(head, pos, v);
    }
    print_list(head);
    cout << "Tail: " << tail->val << endl;


    return 0;
}