// creating a node and inserting new node at Head,tail,middle (position)

#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next; // pointer of Node type
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{
    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void InsertAtPosition(int position, int d,Node *&head)
{
    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // creating a node for d
    Node *NodeToInsert = new Node(d);
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}
int main()
{
    // created a new node

    Node *node1 = new Node(20);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    Node* head = node1;
    Node *tail = node1;
    print(head);

    // InsertAtHead(head, 12);
    // print(head);
    InsertAtTail(tail, 12);
    print(head);

    // InsertAtHead(head, 15);
    // print(head);
    InsertAtTail(tail, 15);
    print(head);

    InsertAtPosition(head, 3, 22);
    print(head);

    return 0;
}
