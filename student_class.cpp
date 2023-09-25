#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int roll_number;
    float marks1 = 6.2;
    float marks2 = 3.1;
    float marks3 = 2.2;
    float avg;
    
    
     student(string _n,int _r){
        name = _n;
        roll_number = _r;
       
    }
    float average(){
      cout << (marks1+marks2+marks3)/3.0;
    
    }
    void display(){
        cout << name << roll_number ;
    }
};
int main() {
    student student1("Anjali " , 9 ) ;
   
    student1.average();
     cout << endl;
    student1.display();
    return 0;
}