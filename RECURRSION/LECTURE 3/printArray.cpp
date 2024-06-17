#include<iostream>
#include<vector>
using namespace std;
void display(int* A,int n, int idx){
    if(idx==n) return ;
    cout<<A[idx]<<" ";
    display(A,n,idx+1);
    return;
}
void display2(vector<int> &v,int idx){
    if(idx==v.size()) return ;
    cout<<v[idx]<<" ";
    display2(v,idx+1);
    return;
}
int main(){
    int arr[] = {1,2,3,5,3,6,2,0,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);
    vector<int> v(n);
    for(int i=0; i<n; i++){
        v[i] = arr[i];
    }
    cout<<endl;
    display2(v,0);
    return 0;
}