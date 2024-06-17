#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of students : ";
    cin>>n;
    int marks[n];
    cout<<"Enter the marks : ";
    for(int i=0; i<n; i++){
        cin>>marks[i];
    }

    for(int i=0; i<n; i++){
        if(marks[i]<35) cout<<i<<" ";
    }
    return 0;
}