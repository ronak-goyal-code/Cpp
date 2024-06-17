#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number of raws in star bridge : ";
    cin>>n;
    for(int i = 1 ; i<=2*n-1 ; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i = 1 ; i<=n-1 ; i++){
        for(int j = 1 ; j<=n-i ; j++){
            cout<<j<<" ";
        }
        for(int k = 1 ; k<=2*i-1 ; k++){
            cout<<"  ";
        }
        for(int l = 1 ; l<=n-i ; l++){
            cout<<l+n-1+i<<" ";
        }
        cout<<endl;
    }
}