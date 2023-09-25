
#include<iostream>
using namespace std;

int main (){
    // Insertion of element in an array
    int array[6] = {10, 20, 30, 40, 50}; // Increased the size of the array
    int len = 5; // Length of array
    len = len + 1;
    
    for(int i = len - 1; i > 0; i--) {
        array[i] = array[i - 1];
    }
    
    array[0] = 60;
    
    // Printing the modified array after insertion
    cout << "Array after insertion:" << endl;
    for(int i = 0; i < len; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Deletion of element in an array
    for(int i = 0; i < len - 1; i++) {
        array[i] = array[i + 1];
    }
    len = len - 1;
    
    // Printing the modified array after deletion
    cout << "Array after deletion:" << endl;
    for(int i = 0; i < len; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}