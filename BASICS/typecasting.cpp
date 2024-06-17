#include<iostream>
using namespace std ;
int main(){
    float x = 7.1;
    // int y = x; // generally we don't use this method for typecasting.
    // cout<<y;
    int y;
    y = (int)x; // int y = (int)x; -> this is also correct.
    cout<<y<<endl;
    bool z = false;
    // cout<<z+5;
    int w = (int)z;
    cout<<z;
    // but generally we use typecasting for ascii value of char variables.
    char ch = 'A'; 
    int p = (int)ch;
    cout<<p;
    // A -> 65;
    // a -> 97;
    // 0 -> 48;


    return 0;
}