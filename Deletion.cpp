#include<iostream>
using namespace std;
int main(){
    //deletion operation on array
    int len = 6; //length of array 
    int i;
    int loc;
    cin >> loc;
    int a[6] = {10,20,30,40,50,60};
    for(int i=loc; i<6; i++){
        a[i] = a[i+1];
    }
    len = len-1;
    cout << a[3];
    return 0;
}