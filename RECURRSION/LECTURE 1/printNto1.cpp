#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return ;
    cout<<n<<" ";
    return print(n-1);
}

int main(){
    int n;
    cout<<"ENTER NUMBER : ";
    cin>>n;
    cout<<"PRINT OF N TO 1 : ";
    print(n);
    return 0;
}