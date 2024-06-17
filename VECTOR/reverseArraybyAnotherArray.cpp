#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter array : ";

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    vector<int> v2(n);
    for(int i=0; i<n; i++){
        int x = v[n-i-1];
        v2[i] = x;
    }

    for(int i=0; i<n; i++){
        cout<<v2[i]<<" ";
    }


}