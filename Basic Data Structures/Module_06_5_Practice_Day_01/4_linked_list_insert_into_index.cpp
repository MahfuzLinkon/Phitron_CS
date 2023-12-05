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

void insert_data(Node *&head, int v)
{
    Node *createNode = new Node(v);
    if (head == NULL)
    {
        head = createNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = createNode;
}

void print_list(Node *head)
{
    Node *tmp = head;
    // cout << "Your List is: ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_at_head(Node *&head, int v)
{
    Node *createNode = new Node(v);
    createNode->next = head;
    head = createNode;
    print_list(head);
}

void insert_at_index(Node *head, int index, int v)
{
    Node *createNode = new Node(v);
    Node *tmp = head;

    for (int i = 1; i <= index - 1; i++)
    {
        tmp = tmp->next;
    }

    if (tmp == NULL)
    {
        cout << "Invalid Index." << endl;
        return;
    }

    createNode->next = tmp->next;
    tmp->next = createNode;
    print_list(head);
}

int main()
{
    Node *head = NULL;
    cout << "Please Enter Value: ";
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_data(head, v);
    }
    // print_list(head);
    int q;
    cout << "Enter Number Of Queries: ";
    cin >> q;
    while (q--)
    {
        int index, v;
        // cout << "Enter Index Number and Value: ";
        cin >> index >> v;
        if (index == 0)
        {
            insert_at_head(head, v);
        }
        else
        {
            insert_at_index(head, index, v);
        }
    }

    return 0;
}