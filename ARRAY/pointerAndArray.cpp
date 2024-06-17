#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,4,2,6};
    int* ptr = arr;
    //int* ptr = &arr -> error 
    //int* ptr = &arr[0]; -> right method
    // cout<<ptr<<endl;
    // cout<<&arr<<endl;
    ptr[0]=8;
    // for(int i=0; i<5; i++){
    //     cout<<ptr[i]<<" "; // i[ptr] and i[arr] also work 
    // }
    *ptr = 9;
    ptr++; // ptr is pointing to 2nd element of array.
    *ptr = 10;
    ptr--; // ptr is pointing to 1st elementb  of array.
    for(int i=0; i<5; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;
}