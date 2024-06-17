#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"fill the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int>v(n,0);
    int x = 0;
    for(int i=0; i<n; i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=0; j<n; j++){
            if(v[i]==1){
                continue;
            }
            else{
                if(min>arr[j]){
                   min = arr[j];
                   mindx = j;
                }
            }
        }
        arr[mindx] = x;
        v[mindx] = 1;
        x++;
    }
    cout<<"after changes : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}