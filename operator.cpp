#include<iostream>
using namespace std;

int main(){
    int a = 2;
    int b = 3;
    //regional operator
    cout<< (a==b) <<endl;
    cout<< (a!=b)<<endl;
    cout<< (a>b)<<endl;
    cout<< (a<b)<<endl;
    
    //logical operator
    bool exp1 = true;
    bool exp2 = false;

    cout<< (exp1&&exp2)<<"\n";//logical and.
    cout<<((8>5&&4>2))<<"\n";

    cout<<(2>5||5>2)<<"\n"; //logical or 
    cout<<(exp1||exp2)<<"\n";

    cout<<(!(2>5||5>2))<<"\n"; //logical not

    //assignment operator
    cout<< (b-=1)<<"\n";
    int i = 4;
    cout<<(i/=2)<<"\n";
    cout<<(i%=2);

    return 0;
}
