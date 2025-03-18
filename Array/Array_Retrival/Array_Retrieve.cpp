#include <iostream>
using namespace std;

// Function for retrieve a specific element by index number 

int array_Retrieve_by_Index(int arr[], int i, int n) {

    // Check is Index number valid or not
    if (i >= 0 && i < n) {
        return arr[i];
    } else {
        cout << "Index out of bounds!" << endl;
        return -1;  // shows not any index
    }

    /*
      it directly accesses the element at index i using arr[i]
      its checks if the index is within bounds So time complexity is O(1)
    */
}

// Function for retrieve all elements using a For loop

void array_Retrieve_By_Loop(int arr[], int n) {

    for (int i = 0; i < n; i++) {

        cout << arr[i] << endl;

    }

    /*
        The loop runs n times because it starts from 0 and runs until i < n --> (n-1)
        in simple it runs n times So Time Complexity is O(n)

    */

}

int main() {
    int array1[] = {12, 22, 33, 44, 55};

    int n1 = sizeof(array1) / sizeof(array1[0]);  // n1 is the size for Array1

    cout << "Array retrieve by specific index number: " << endl;
    cout << array_Retrieve_by_Index(array1, 2, n1) << endl;  // Retrieve index 2 (which is 33)

    cout << "\nArray retrieve by Loop : " << endl;
    int array2[] = {100, 200, 300, 400, 500};
    
    int n2 = sizeof(array2) / sizeof(array2[0]); // n2 is the size for Array2
    
    array_Retrieve_By_Loop(array2, n2);

    return 0;
}
