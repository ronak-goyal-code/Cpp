#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    cout<<"sum of elements of given array is : "<<sum<<endl;

}