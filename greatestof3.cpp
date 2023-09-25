#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter first number";
    cin>> a;
    cout << "Enter second number";
    cin>> b;
    cout << "Enter third  number";
    cin>> c;
    //using if else
    if (a >= b && a >= c){
        cout << a;
        cout<<" is greatest";
    }
    else if (b >= a && b >= c){
        cout << b;
        cout << " is greatest";
    }
    else{
        cout << c;
        cout << " is greatest";
    }

    return 0;
}