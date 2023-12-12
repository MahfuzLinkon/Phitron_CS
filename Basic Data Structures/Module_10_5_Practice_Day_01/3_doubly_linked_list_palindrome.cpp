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

void insert_list(Node *&head, Node *&tail, int val)
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

void palindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    bool flag = true;

    while (i != j && i->next != j)
    {
        if (i->val != j->val)
        {
            flag = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }

    if (i->val != j->val)
    {
        flag = false;
    }

    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_list(head, tail, val);
    }
    palindrome(head, tail);
    // print_list(head);

    return 0;
}