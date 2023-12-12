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
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void print_rev(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}

// void insert_at_position(Node *head, int pos, int val)
// {
//     Node *newNode = new Node(val);
//     Node *tmp = head;
//     for (int i = 1; i <= pos - 1; i++)
//     {
//         tmp = tmp->next;
//     }
//     newNode->next = tmp->next;
//     tmp->next = newNode;
//     newNode->next->prev = newNode;
//     newNode->prev = tmp;
// }

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

// void insert_at_head(Node *&head, Node *&tail, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     newNode->next = head;
//     head->prev = newNode;
//     head = newNode;
// }

// void insert_at_tail(Node *&head, Node *&tail, int val)
// {
//     Node *newNode = new Node(val);
//     if (tail == NULL)
//     {
//         insert_at_head(head, tail, val);
//         return;
//     }
//     tail->next = newNode;
//     newNode->prev = tail;
//     tail = newNode;
// }

void delete_at_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *delNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete delNode;
}

void delete_tail(Node *&head, Node *&tail)
{
    Node *delNode = tail;
    tail = tail->prev;
    delete delNode;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void delete_head(Node *&head, Node *&tail)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

int main()
{
    // Node *head = NULL;
    // Node *tail = NULL;

    Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);
    // Node *c = new Node(40);
    // Node *tail = c;
    Node *tail = head;

    // head->next = a;
    // a->next = b;
    // a->prev = head;
    // b->prev = a;
    // b->next = c;
    // c->prev = b;

    int pos;
    cin >> pos;

    // delete_at_position(head, pos);
    // delete_tail(tail);
    // delete_head(head);

    if (pos >= size(head))
    {
        cout << "Invalid" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head, tail);
    }
    else if (pos == size(head) - 1)
    {
        delete_tail(head, tail);
    }
    else
    {
        delete_at_position(head, pos);
    }

    print_list(head);
    print_rev(tail);

    return 0;
}