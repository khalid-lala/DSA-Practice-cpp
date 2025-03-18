#include<iostream>
using namespace std ;
const int N = 5 ;
int ESF = 0 ;

bool insert_In_Array (int arr[],int k ){
    
    if (ESF==N)
    {
        return false ;  
    }


    arr[ESF]=k;
    ESF++ ;
    return true ;
    
}

int main (){

    int k =10 ;
    int myArray[N];
    // cout << insert_In_Array(myArray,1);
    // cout << insert_In_Array(myArray,2);
    // cout << insert_In_Array(myArray,3);
    // cout << insert_In_Array(myArray,4);
    // cout << insert_In_Array(myArray,5);
    // cout << insert_In_Array(myArray,5);


    
    for (int i = 0; i < N; i++)
    {
        cout << insert_In_Array(myArray,i) ;
    }
    

}