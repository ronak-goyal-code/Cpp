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
    int hi = n-1;
    int lo = 0;
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid]==mid) lo = mid + 1;
        else{
            ans = mid;
            hi = mid - 1;
        }
    }

    cout<<ans;

    return 0 ;
}