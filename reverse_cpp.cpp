#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>vec= {10,20,30,40,50,60};
    int size = 6;
    int start = 0;  
    int end = size-1; 
    while(start<=end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    for(int i=0; i<=size-1; i++){
        cout << vec[i] << " ";
    }
    return 0;
}