#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of raws in star pyramid : ";
    cin>>n;
    cout<<"REQUIRED PATTERN :-"<<endl;
    int nst = 2*n - 1;
    int nsp = 0;
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=nsp ; j++){
            cout<<"  ";
        }
        nsp++;
        for(int k = 1 ; k<=nst ; k++){
            cout<<"* ";
        }
        nst-=2;
        cout<<endl;
    }


}