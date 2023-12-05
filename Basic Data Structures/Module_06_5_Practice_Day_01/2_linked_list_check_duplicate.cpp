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

int main()
{
    Node *head = NULL;
    cout << "Please Insert Value: " << endl;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_data(head, v);
    }
    // print_list(head);
    vector<int> fq(100);

    Node *tmp = head;
    while (tmp != NULL)
    {
        int index = tmp->val-1;
        fq[index]++;
        tmp = tmp->next;
    }
    bool flag = false;

    for (int x : fq)
    {
        if (x > 1)
        {
            flag = true;
            break;
        }
    }

    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}