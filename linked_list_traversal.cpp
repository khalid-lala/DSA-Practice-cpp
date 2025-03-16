#include<iostream>
using namespace std ;
class Node{
    public :
    int data;
    Node* next ;
   
    Node (int value)
    {
        data = value ;
        next = NULL ;
    }
};


void trasvers(Node* head){
    while (head != nullptr)     
    {
        cout << head->data << " --> " ;
        head = head->next ;
    }
    cout << "Null" ;
    
}

int main (){
    Node* obj1 = new Node(99);
    Node* obj2 = new Node(11);
    Node* obj3 = new Node(22);
    Node* obj4 = new Node(33);

    obj1->next = obj2 ;
    obj2->next = obj3 ;
    obj3->next = obj4 ;
    obj4->next = NULL ;

    Node * head = obj1 ;

    trasvers(head) ;


    // cout << obj1->data << "\n" << obj1->next;
    // cout << obj2->data << "\n" << obj2->next;
    // cout << obj3->data << "\n" << obj3->next;
    // cout << obj4->data << "\n" << obj4->next;

}