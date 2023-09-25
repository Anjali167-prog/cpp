#include<iostream>
using namespace std;

int addition(int num1,int num2){
    int sum = num1 + num2;
    return sum;
}
int substraction(int num1,int num2){
    int minus = num1 - num2;
    return minus;
}
int multiply(int num1,int num2){
    int multiply = num1 * num2;
    return multiply;
}
int divison(int num1,int num2){
    int divide = num1/num2;
    return divide;
}
int main(){
    cout << "Enter two numbers ";
    int a;
    int b;
    cin >> a >> b;
    cout << "Enter operator : +,-,*,/  ";
    char op;
    cin >> op;

    if(op== '+'){cout << addition(a,b);}
    else if(op=='-'){cout << substraction(a,b);}
    else if(op=='*'){cout << multiply(a,b);}
    else{cout<< divison(a,b);}
    return 0;
}