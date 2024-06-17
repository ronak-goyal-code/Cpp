#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return ;
    print(n-1);
    cout<<n<<" ";
    return ;
}

int main(){
    int n;
    cout<<"ENTER NUMBER : ";
    cin>>n;
    cout<<"PRINT OF 1 TO N : ";
    print(n);
    return 0;
}