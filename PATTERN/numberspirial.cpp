#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cout<<"enter n : ";
    cin>>n;
    cout<<"REQUIRED PATTERN :-"<<endl;
    for(int i = 1;i<=2*n-1;i++){
        for(int j = 1;j<=2*n-1;j++){
            a = i;
            b = j;
            if(i>n) a = 2*n - i;
            if(j>n) b = 2*n - j;
            cout<<n+1-min(a,b)<<" ";
        }
        cout<<endl;
    }
}