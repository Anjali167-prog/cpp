#include <iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    void setDimensions(int l,int b){
        length = l;
        breadth = b;
    }
    int getArea(){
        int Area = length*breadth;
        cout << Area;
     
        
    }
};

int main() {
    Rectangle Rec1;
    Rec1.setDimensions(10,5);
    Rec1.getArea();
    return 0;
}