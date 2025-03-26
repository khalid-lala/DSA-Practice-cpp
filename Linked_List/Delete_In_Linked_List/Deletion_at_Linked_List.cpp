#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int v)
    {
        data = v;
        next = nullptr;
    }
};

bool delete_Element(Node *&Head, int value){

    if (Head == NULL)
    {
        return false;
    }

    Node *current = Head;
    if (current->data == value)
    {
        Head = current->next;
        return true;
    }

    Node *pred = current;
    current = current->next;

    while (current != NULL)
    {
        if (current->data == value)
        {
            pred->next = current->next;
            return true;
        }

        pred = current;
        current = current->next;
    }
    return false;
}



void traverse(Node *head){
    if (head == NULL)
    {
        cout << "Linked List is Empty ! ";
    }

    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << " --> ";
        current = current->next;
    }
    cout << "NULL";
}

int main()
{

    Node *node1 = new Node(9);
    Node *node2 = new Node(8);
    Node *node3 = new Node(7);
    Node *node4 = new Node(6);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    Node *head = node1;
    traverse(head);

    cout << delete_Element(head, 7) << endl;
    traverse(head);
}