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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        cout << "Inserted at Head." << endl;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    cout << "Inserted at Tail." << endl;
}

void print_list(Node *head)
{
    cout << "Your List is: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << "Inserted At Postion " << pos << endl;
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << "Inserted At Head." << endl;
}

void delete_from_postion(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *delNode = temp->next;
    temp->next = temp->next->next;
    cout << "Position " << pos << " Deleted Successfully" << endl;
    delete delNode;
}

void delete_head(Node *&head)
{
    Node *delNode = head;
    head = head->next;
    delete delNode;
    cout << "Head Deleted." << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "*************** Select Option ****************" << endl;
        cout << "Option 1: Insert Value At Tail." << endl;
        cout << "Option 2: Show Your List." << endl;
        cout << "Option 3: Insert at Any Postion." << endl;
        cout << "Option 4: Insert At Head." << endl;
        cout << "Option 5: Delete Any Node." << endl;
        cout << "Option 6: Delete Head." << endl;
        cout << "Option 7: Terminate." << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please Enter Value: ";
            int val;
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 2)
        {
            print_list(head);
        }
        else if (op == 3)
        {
            int pos, val;
            cout << "Enter Postion: ";
            cin >> pos;
            cout << "Enter Value: ";
            cin >> val;
            if (pos == 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_at_position(head, pos, val);
            }
        }
        else if (op == 4)
        {
            cout << "Enter Value: ";
            int val;
            cin >> val;
            insert_at_head(head, val);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter Postion: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_postion(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}