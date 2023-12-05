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
void check_ascending_sort(Node *head)
{
    bool flag = true;
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        if (tmp->val > tmp->next->val)
        {
            flag = false;
            break;
        }
        tmp = tmp->next;
    }
    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
    check_ascending_sort(head);

    return 0;
}