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

// traverse of a Linked List 

void trasvers(Node* head){
    while (head != nullptr)     
    {
        cout << head->data << " --> " ;
        head = head->next ; 
    }
    cout << "Null" ;
}

// Insert Node at the head 
void insert_At_Head(Node*&head,int value_Of_New_Node){
    Node* newNode = new Node(value_Of_New_Node);
    newNode->next = head ; 
    head = newNode ;
}

// insert Node at the end 
void insert_At_End(Node* &Head , int value_At_End){
    if (Head==NULL)
    {
        insert_At_Head(Head,value_At_End);
    }
    
    Node* endNode = new Node (value_At_End);
    Node* temp = Head ;

    while (temp->next!=NULL)
    {
        temp = temp->next ;
    }

    temp->next=endNode;

}

// insert Node at the Middle 
void insert_At_Middle(Node* &Head , int val , int position ){

    if (position==1)
    {
        insert_At_Head(Head,val);
        return ;
    }
    
    Node* newNode = new Node (val);
    Node* pre = Head ;
    int count = 1 ;

    while (count < (position-1))        
    {
        pre = pre->next ;
        count ++ ;
    }
    newNode->next=pre->next;
    pre->next=newNode;

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

    trasvers(head); 

    insert_At_Head(head,100);

    cout << endl ;

    trasvers(head);

    insert_At_End(head,9999);

    cout << endl ;

    trasvers(head) ;

    insert_At_Middle(head,888,2);
    cout << endl ;
    trasvers(head);

}