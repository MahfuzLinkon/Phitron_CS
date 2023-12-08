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

int search(Node *head, int x)
{
    Node *tmp = head;
    bool flag = false;
    int index = 0;
    while (tmp != NULL)
    {
        index++;
        if (tmp->val == x)
        {
            flag = true;
            break;
        }
        tmp = tmp->next;
    }
    return flag == true ? index - 1 : -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
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
        int x;
        cin >> x;
        cout << search(head, x) << endl;
    }

    return 0;
}