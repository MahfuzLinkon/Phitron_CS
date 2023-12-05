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
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int size_of_list(Node *head)
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

void middle_element(Node *head, int sz)
{
    Node *tmp = head;
    int mid = sz / 2;
    for (int i = 1; i <= mid - 1; i++)
    {
        tmp = tmp->next;
    }

    if (sz % 2 == 0)
    {
        cout << tmp->val << " " << tmp->next->val << endl;
    }
    else
    {
        cout << tmp->next->val << endl;
    }
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_data(head, v);
    }
    // print_list(head);
    int sz = size_of_list(head);
    middle_element(head, sz);

    return 0;
}