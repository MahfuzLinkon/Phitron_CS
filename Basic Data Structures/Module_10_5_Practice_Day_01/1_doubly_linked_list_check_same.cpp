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

void print_list_rev(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
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

void check_same(Node *head1, Node *head2)
{
    if (size(head1) != size(head2))
    {
        cout << "NO" << endl;
        return;
    }
    bool flag = true;
    // Node *tmp = head1;
    while (head1 != NULL)
    {
        if (head1->val != head2->val)
        {
            flag = false;
        }
        head1 = head1->next;
        head2 = head2->next;
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
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_list(head1, tail1, val);
    }

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_list(head2, tail2, val);
    }

    // print_list(head1);
    // print_list_rev(tail1);

    // print_list(head2);
    // print_list_rev(tail2);
    check_same(head1, head2);
    return 0;
}