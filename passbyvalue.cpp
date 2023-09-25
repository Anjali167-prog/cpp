#include<iostream>
using namespace std;

/*void changevalue(int z){
    z = 100;
}


void decrease(int n1 ,int n2){
    n1--;
    n2 = n2 - 2;
    cout << (n1)<< ":"<< (n2)<< endl; 
    
}

int main(){

    int a = 5;
    changevalue(a);
    cout << a << endl;

    int p = 26;
    int q = 13;
    decrease(p,q);
    cout << (p)<< ":" << (q);
    return 0;
}*/
void makeTwice(int p){
    p = p * 2;
    cout << p << "\n";
}
int main(){
    int p = 24;
    makeTwice(p);
    cout << p;
    return 0;
}