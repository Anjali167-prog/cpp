#include <iostream>
using namespace std;
int main() {
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    int *ptr = arr;
    for(int i=0; i<n; i++){
        sum = sum + *ptr;
        ptr++;
    }
    cout << sum;
    return 0;
}