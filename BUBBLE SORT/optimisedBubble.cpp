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
    // bubble sort optimised
    // Time Complexities :- Best Case : O(n)  Average Case : O(n*2)  Worst Case : O(n*2)  
    for(int i=0; i<n-1; i++){ // n-1 passes
        // traverse
        bool flag = true;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true){  // swap didnot happen.
            break;
        }
    }

    cout<<"sorted array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}