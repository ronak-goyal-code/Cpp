#include<iostream>
using namespace std;
int fibbo(int n){
    if (n==1 || n==2) return 1;
    int left = fibbo(n-1);
    int right = fibbo(n-2);
    return left + right;
}

int main(){
    cout<<fibbo(4);
}