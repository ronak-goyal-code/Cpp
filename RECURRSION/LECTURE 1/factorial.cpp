#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1 || n==0) return 1;
    if(n<0) return -1;
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"ENTER NUMBER : ";
    cin>>n;
    cout<<"FACTORIAL OF GIVEN NUMBER IS : "<<factorial(n)<<endl;
    return 0;
}
