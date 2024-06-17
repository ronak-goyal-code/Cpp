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

    int x,i;
    cout<<"enter elements for search : ";
    cin>>x;
    bool flag = false;
    for(i=0; i<n; i++){
        if(x==arr[i]){
            flag = true;
            break;
        }
    }

    if(flag == true ){
        cout<<"element is present at "<<i<<" index. ";
    }
    else{
        cout<<"not present.";
    }

}