//performing various arithematic operations
#include<iostream>
using namespace std; 
// creating functions 
int addition(int x,int y){ 
    int sum = x + y;
    return sum;
}
int subtraction(int x, int y){
    int subtract = x - y;
    return subtract;
}
int multiply(int x, int y){
    int multiply = x * y;
    return multiply;
}
int division(int x , int y){
    int divide = x / y;
    return divide;
}
int main(){
    int a , b;
    cout << "Enter two numbers ";
    cin >> a; // Taking input from user 
    cin >> b;
    cout << "sum of numbers is "<< addition(a,b)<<endl; // function call 
    cout << "subtraction of numbers is "<< subtraction(a,b)<<endl;
    cout << "multiplication of numbers is "<< multiply(a,b)<<endl;
    cout << "divison of numbers is "<< division(a,b)<<endl;
}