#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of elements in array : ";
    cin>>n;
    int arr[n];
    cout<<"enter array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool flag = true;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }

    if(flag==true) cout<<"sorted";
    else cout<<"unsorted";

    return 0;
}