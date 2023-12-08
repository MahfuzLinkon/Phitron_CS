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

void insert_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_node(Node *head, Node *&tail, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    if (pos == size(head) - 1)
    {
        Node *deleteNode = tmp->next;
        tail = tmp;
        tmp->next = tmp->next->next;
        delete deleteNode;
    }
    else
    {
        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
    }
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

        if (x == 1)
        {
            insert_tail(head, tail, v);
            print_list(head);
        }
        else if (x == 0)
        {
            insert_head(head, tail, v);
            print_list(head);
        }
        else if (x == 2)
        {
            if (v < size(head))
            {
                if (v == 0)
                {
                    delete_head(head);
                    print_list(head);
                }
                else
                {
                    delete_node(head, tail, v);
                    print_list(head);
                }
            }
            else
            {
                print_list(head);
            }
        }
    }

    return 0;
}