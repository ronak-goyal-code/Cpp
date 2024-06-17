#include<iostream>
#include<climits>
using namespace std;
void printMax(int* arr,int n,int idx, int max){
    if(n==idx){
        cout<<max<<endl;
        return ;
    }
    if(max<arr[idx]) max = arr[idx];
    printMax(arr,n,idx+1,max);
    return;

}
int maxInArray(int* arr,int n,int idx){
    if(n==idx) return INT_MIN;
    return max(arr[idx],maxInArray(arr,n,idx+1));

}
int main(){
    int arr[] = {1,2,3,5,3,6,88,0,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    //printMax(arr,n,0,INT_MIN);
    cout<<maxInArray(arr,n,0);
    return 0;
}