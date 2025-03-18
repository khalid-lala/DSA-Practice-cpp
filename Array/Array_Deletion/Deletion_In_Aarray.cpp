#include<iostream>
using namespace std ;
const int N=5 ;
int ESF = N ;
bool deletion_In_Array(int arr[],int value){

    int i  ;
    for ( i = 0; i < N ; i++)
    {
        if (arr[i]==value)
        {
            break;
        }
    }
    if (i==N)
    {
        return false ;  
    }

    int j ;
    for (j = i; j < ESF-1; j++)
    {
        arr[j] = arr[j+1];
    
    }

    arr[j]=0 ;
    ESF-- ;
    return true ;

}


int main (){

    int array[N]={1,2,3,4,5};

    for (int i = 0; i < N ; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl ;
    int element ;
    cout << "Enter the element you want to delete : " ;
    cin >> element ;

    if (deletion_In_Array(array,element)){

        cout << "Delete " << element << " From Array " << endl ;

        for (int i = 0; i < N ; i++)
        {
            cout << array[i] << " ";
        }


    }
    else{
        cout << "Element Not found in Array " << endl ;
        
        for (int i = 0; i < N ; i++)
        {
            cout << array[i] << " ";
        }
    }


}