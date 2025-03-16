#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void traversal_of_Linked_List(Node *Head)
{
    if (Head==NULL)
    {
        cout << "Linked List IS Empty ! " ;
    }
    
    while (Head != nullptr)
    {
        cout << Head->data << "-->";
        Head = Head->next;
    }
    cout << "NULL";
}

int main()
{
    Node *node1 = new Node(11);
    Node *node2 = new Node(22);
    Node *node3 = new Node(33);

    Node *Head = node1;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    traversal_of_Linked_List(Head);
}
