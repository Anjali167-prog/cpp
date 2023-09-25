#include<iostream>
using namespace std;

float area(int r){
    return 3.14*r*r;
}
float circumference(int r){
    return 2*3.14*r;
}

int main(){
    int x ;
    cin >> x;
    cout << area(x)<<endl;
    cout << circumference(x);
    return 0;
}
