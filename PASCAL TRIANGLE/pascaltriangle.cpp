#include<iostream>
using namespace std;
int fact(int n){
    int factorial = 1;
    for(int i = 2 ; i<=n ; i++){
        factorial*=i;
    }
    return factorial;
}

int combination(int n , int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"PASCAL TRIANGLE :-"<<endl;
    for(int i = 0 ; i<=n ; i++){
        for(int k = 0 ; k<=n-i-1 ; k++){
            cout<<"  ";
        }
        for(int j = 0 ; j<=i ; j++){
            cout<<combination(i,j)<<"   ";
        }
        cout<<endl;
    }
}