#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num = 50;
    cout << "The value of num without setting width" << num << endl;
    cout << "The value of num with setting width: " 
         <<setw(30)<< num << endl;
    //setw function with cin 
    string n;
    cin >>setw(5)>> n;
        
    cout << n;

    return 0;
}
