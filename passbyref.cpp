#include<iostream>
using namespace std;

void fun(int &x, int &y ){
    x = 100;
    y = 200;
}

int main(){
    int a = 5;
    int b = 10;
    fun(a ,b);
    cout << a << endl << b;
}