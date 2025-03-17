#include<iostream>
using namespace std ;

class Node {
    public:
    int data ;
    Node* next ;

    Node (int val){
        data=val ;
    }
};

void travers(Node* Head ){
    while (Head != nullptr)            
    {
        if (Head==NULL)
        {
            cout<< "Linked List is Empty ! " ;
            return ;
        }

        cout << Head->data << " --> " ;
        Head = Head->next ;
    }
    cout << "Null" ;
}

void deletion_At_Head(Node* &Head){ 
    if (Head == NULL)
    {
        cout<< "Linked List is Empty ! ";
    }
    Node* temp = Head ;
    Head = Head->next ;
    delete temp ;
}

int main (){

    Node* node1 = new Node(22);
    Node* node2 = new Node(33);
    Node* node3 = new Node(44);

    Node* Head = node1 ;

    node1 -> next = node2 ;
    node2 -> next = node3 ;
    node3 -> next = NULL ;

    travers(Head);
    cout << endl ;
    deletion_At_Head(Head);
    travers(Head);

}