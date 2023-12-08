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

void remove_duplicate(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL && tmp->next != NULL)
    {
        Node *tmp2 = tmp;
        while (tmp2->next != NULL)
        {
            if (tmp->val == tmp2->next->val)
            {
                Node *deleteNode = tmp2->next;
                tmp2->next = deleteNode->next;
                delete deleteNode;
            }
            else
            {
                tmp2 = tmp2->next;
            }
        }
        tmp = tmp->next;
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
        insert_node(head, tail, v);
    }
    remove_duplicate(head);
    print_list(head);
    return 0;
}