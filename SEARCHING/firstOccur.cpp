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
    int hi = n-1;
    int lo = 0;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            if(target!=arr[mid-1]){
                cout<<mid;
                break;
            }
            else{
                hi = mid-1;
            }
        }
        else if(target>arr[mid]) lo = mid+1 ;
        else hi = hi -1;
    }

    return 0 ;
}