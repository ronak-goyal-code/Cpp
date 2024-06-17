#include<iostream>
using namespace std;
void swap(int &a, int &b){ // different method to swap if we not use & operator then no swaping occurs.
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}