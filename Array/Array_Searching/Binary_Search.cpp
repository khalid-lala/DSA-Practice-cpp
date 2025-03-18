#include<iostream>
using namespace std ;

// Function for Binary Search Array
int Binary_Search(int arr[],int n , int element){

    int low =  0;
    int high = n ;

    while (low <= high){

        int mid = (low+high)/2 ;

        if (arr[mid] == element)
        {
            return mid ;
        }
        else if(element > arr[mid])
        {
            low = mid + 1 ;
        }
        else{
            high = mid - 1 ;
        }
    }

    return -1 ; // if their is not any element in array

    /*
       the loop Divide the mid value repteadly in half 
       so due to this the time complexity is O(log n)
    */
    
}


int main (){
    
    // For the Binary Search first we must sort the Array 
    int array [] = {1,2,3,4,5,6};

    int size = sizeof(array)/sizeof(array[0]);

    int element ;
    cout << "Enter the Element You want to Search : " << endl ;
    cin >> element ;
    cout << Binary_Search(array,size,element);



}