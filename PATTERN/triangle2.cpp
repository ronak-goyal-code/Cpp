#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of raws in triangle : ";
    cin>>n;
    cout<<"REQUIRED PATTERN :-"<<endl;
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=n+1-i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }


}