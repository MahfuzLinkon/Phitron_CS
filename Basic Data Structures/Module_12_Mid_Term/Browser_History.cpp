#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    string val;
    Node *prev;
    Node *next;
    Node(string val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

// void print_list(Node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->val << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// void print_list_rev(Node *tail)
// {
//     while (tail != NULL)
//     {
//         cout << tail->val << " ";
//         tail = tail->prev;
//     }
//     cout << endl;
// }

void insert_node(Node *&head, Node *&tail, string val)
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

void visit_address(Node *head, Node *&found, string v)
{
    // Node *tmp = head;
    bool flag = false;
    while (head != NULL)
    {
        if (head->val == v)
        {
            flag = true;
            found = head;
            break;
        }
        head = head->next;
    }
    if (flag == true)
    {
        cout << head->val << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void prev(Node *&found)
{
    Node *tmp = found;
    tmp = tmp->prev;
    if (tmp == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        cout << tmp->val << endl;
        found = tmp;
    }
}

void next(Node *&found)
{
    Node *tmp = found;
    tmp = tmp->next;
    if (tmp == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        cout << tmp->val << endl;
        found = tmp;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *found = NULL;
    while (true)
    {
        string val;
        cin >> val;
        if (val == "end")
            break;
        insert_node(head, tail, val);
    }

    // print_list(head);
    // print_list_rev(tail);

    int q;
    cin >> q;
    while (q--)
    {
        string x;
        cin >> x;
        if (x == "visit")
        {
            string v;
            cin >> v;
            visit_address(head, found, v);
        }
        else if (x == "prev")
        {
            prev(found);
        }
        else if (x == "next")
        {
            next(found);
        }
    }

    return 0;
}