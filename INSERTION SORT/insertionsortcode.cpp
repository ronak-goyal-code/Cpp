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
    
    // insertion sort
    for(int i=1; i<n; i++){
        int j = i;
        // while(j>0){
        //     if(arr[j]>=arr[j-1]) break;
        //     else swap(arr[j],arr[j-1]);
        //     j--;
        // }
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    // time complexities : 
    // best case : O(n)
    // average case : O(n*n)
    // worst case : O(n*n)

    // stable sort (only adjacent elements are swapped)
    cout<<"sorted array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}