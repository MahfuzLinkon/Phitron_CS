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

// void print_list(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }

void min_max_diff(Node *head)
{
    int mn = INT_MAX;
    int mx = INT_MIN;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (mn > tmp->val)
        {
            mn = tmp->val;
        }
        if (mx < tmp->val)
        {
            mx = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << mx - mn << endl;
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
    min_max_diff(head);
    // print_list(head);

    return 0;
}