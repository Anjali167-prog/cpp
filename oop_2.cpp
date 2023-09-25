//c++ program to find factorial of number
#include <iostream>
using namespace std;
int main() {
    int factorial = 1;//initializing variable factorial
    int num;
    cout << "Enter number to find factorial ";
    cin >> num;
    for(int i=num; i>0; i--){
        factorial = factorial*i;
    }
    cout << factorial;
    return 0;
}