#include<iostream>
using namespace std ;

// Function for linear Search Array
int linear_Search(int arr[] , int size , int element){
    
    for (int i = 0; i<size; i++)
    {
        if (arr[i]==element)
        {
            return i ;
        }
    }
    return -1 ; // return -1 if the element you given is not found is an array
    

     /*
       loop compare each element with every index in array so
       the loop runs n-->(n-1) times and the Time complexity is O(n) 
    */
}
int main (){

    int array[] = {100,200,300,400,500};

    int size=sizeof(array)/sizeof(array[0]);

    int element ;
    cout << "Enter the Element You want to Search : " << endl ;
    cin >> element ;

    cout << linear_Search(array,size,element);

}