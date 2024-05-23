// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void swap(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int num1 = 5;
    int num2 = 6;
    swap(num1, num2);
    cout << "The value of a is "<< num1 << endl;
    cout << "The value of b is "<< num2<< endl;
    return 0;
}