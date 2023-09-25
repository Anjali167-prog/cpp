#include<iostream>
using namespace std;

int main(){
    char star;
    cin >> star;
    switch(star){
        case 'a': cout << "it is a";
        break;
        case 'e':cout << "it is e";
        break;
        case 'i':cout <<"it is i";
        break;
        case 'o': cout << "it is o";
        break;
        case 'u': cout << "it is u";
        break;
        default: cout << "it is consonant";
        break;

    }
    return 0;
}