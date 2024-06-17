#include<iostream>
using namespace std;
// THIS PROBLEM LIKE FIBBONACCI SERIES 
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    int ways = stair(n-1) + stair(n-2);
    return ways;
}

int main(){
    int n;
    cout<<"ENTER NUMBER OF STAIRS : ";
    cin>>n;
    cout<<"TOTAL NUMBER OF WAYS TO CLIMBS UP : "<<stair(n);
    return 0;
}