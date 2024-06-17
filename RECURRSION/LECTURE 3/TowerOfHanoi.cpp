#include<iostream>
using namespace std;
void toh(int n, char s,char h,char d){
    if(n==0) return ;
    toh(n-1,s,d,h);
    cout<<s<<" -> "<<d<<endl;
    toh(n-1,h,s,d);
    return ;
}

int main(){
    int n;
    cout<<"ENTER N : ";
    cin>>n;
    toh(n,'A','B','C');
    return 0;
}