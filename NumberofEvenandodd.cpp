#include<iostream>
using namespace std;
int main(){
    int count = 0; int count1 = 0;
    for(int i=1; i<=100; i++){
        if (i%2 == 0){
           count = count + 1;
        }
        else{
            count1 = count1 + 1;
        }
    }
    cout << "Total no. of even numbers are " << count<<endl;
    cout << "Total no. of odd numbers are " << count1;
    return 0;
}