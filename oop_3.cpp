#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number ";
    cin >> num;
    bool is_prime = true;// num is prime initially
    
    for(int i=2; i<num-1; i++){
        if(num%i==0){
            cout << "not prime"; 
            is_prime = false;
            break;
        }
    }
     if(is_prime){
        cout << "prime";
    }
    

    return 0;
}