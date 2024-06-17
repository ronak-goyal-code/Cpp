#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter size of an sorted array : ";
    cin>>n;
    int arr[n];
    cout<<"enter any sorted array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter target : ";
    cin>>target;
    // linear search method .
    // for(int i=1; i<n; i++){
    //     if(target<arr[i]){
    //         cout<<arr[i-1];
    //         break;
    //     }
    // }

    // binary search method (efficient)
    // int hi = n-1;
    // int lo = 0;
    // while(lo<=hi){
    //     int mid = lo + (hi - lo)/2;
    //     if(target<=arr[mid] && target>arr[mid-1]){
    //         cout<<arr[mid-1];
    //         break;
    //     }
    //     else if(target>arr[mid]) lo = mid+1 ;
    //     else hi = hi -1;
    // }

    // another method 
    int hi = n-1;
    int lo = 0;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            cout<<arr[mid-1];
            flag = true;
            break;
        }
        else if(target>arr[mid]) lo = mid+1 ;
        else hi = hi -1;
    }

    if(flag==false){
        cout<<arr[hi];
    }

    return 0 ;
}