#include<iostream>
using namespace std;
int main(){
    // in array -> continuous memory allocation 
    int arr[5];
    cout<<&arr[0]<<endl; // cout<<arr; also gives the address of first element of array.
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
    // 0x61fefc
    // 0x61ff00
    // 0x61ff04
    // 0x61ff08
    // 0x61ff0c

}