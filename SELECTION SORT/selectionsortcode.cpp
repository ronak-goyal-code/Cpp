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
    
    // selection sort
    int min;
    for(int i=0; i<n-1; i++){
        min = i;
        for(int j=i; j<n; j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);

    }

    cout<<"sorted array : ";
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // for each loop -> when we have no idea about size of an array.
    for(int i : arr){
        cout<<i<<" ";
    }

    return 0;
}