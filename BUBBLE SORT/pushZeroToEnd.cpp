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
    for(int i=0; i<n-1; i++){ 
        bool flag = true;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true){ 
            break;
        }
    }

    cout<<"sorted array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}