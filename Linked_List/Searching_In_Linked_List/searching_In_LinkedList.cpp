#include<iostream>
using namespace std ;

struct Node {
 
    int data ;
    Node* next ;

    Node (int val){
        data = val ;
        next = nullptr ;
    }
};

bool searching_Element(Node* Head , int value){

    if(Head == NULL){
        return false ;
    }
    
    Node* current = Head ;

    while (current!=NULL)
    {
        if(current->data == value){
            return true ;
        }
        current = current->next ;
    }

    return false ;

    
};


int main (){

    Node* node1 = new Node (190);
    Node* node2 = new Node (1);
    Node* node3 = new Node (10);
    Node* node4 = new Node (20);


    node1->next = node2 ;
    node2->next = node3 ;
    node3->next = node4 ;
    node4->next = NULL ;

    Node* head = node1;

    cout << searching_Element(head , 1 ) ;

}