#include<iostream>
using namespace std;

int main (){
    cout << "Jai Narain college of technology"<<endl;
    cout <<"Branch - AIML"<<endl;
    cout << "Enrollment- 0131CL221009" <<endl;
    int i;
    int array[5] = {10,20,30,40,50};
    int len = 5; //length of array
    //traversing in an array
    for(int i=0; i<5; i++){
        cout << array[i]<<" ";
    }
    cout << endl;
    
    //insertion of element in an array
    len = len + 1;
    for(int i=5; i>0; i--) {
        array[i]= array[i-1];
    }
    array[0] = 60;
    //printing the modified array after insertion
    cout << "Array after insertion:"<< endl;
    for(int i=0; i<len; i++){
        cout << array[i] << " ";
    }
    
    cout << endl;
    //deletion of element in an array
    for(int i=0; i<len;i++){
        array[i] = array[i+1];
    }
    len = len - 1;
    //printing the modified array after deletion
    cout << "Array after deletion:"<< endl;
    for(int i=0; i<len; i++){
        cout << array[i]<<" ";
    }
    cout << endl;
    //searching of an element in an array
    int key;
    cout << "Enter element to search ";
    cin >> key;
    bool Find_index = false; //initializing bool
    for(int i=0; i<5; i++){
       if(array[i] == key){
        cout << i;
        Find_index= true;
        break;//exit the loop once element is found
       }
    }
    if(!Find_index){
        cout << "Element not found";
    }
    cout << endl;
    //updating an element in array

    //printing original array
    for(int i=0; i<5; i++){
        cout << array[i];
    }
    cout << endl;
    int Indextoupdate;
    cout << "Enter index to update ";
    cin >> Indextoupdate;
    int new_value;
    if(Indextoupdate>=0 && Indextoupdate<len){
        cout << "Enter new value ";
        cin >> new_value;
        array[Indextoupdate] = new_value;
    }
    else{
        cout << "Invalid index";
    }
    //printing an updated array
    for(int i=0; i<5; i++){
        cout << array[i] << " ";
    }
    return 0;
}

