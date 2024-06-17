#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter x : ";
    cin>>x;
    int hi = x;
    int lo = 0;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        long long m = (long long)mid;
        long long y = (long long)x;
        if(m*m==y){
            cout<<mid;
            return 0;
        }
        else if(m*m>y) hi = mid-1;
        else lo = mid + 1;
    }

    cout<<hi;
    return 0;
}
