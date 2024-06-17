#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v(5,7); // initisl size is 5 and each element is 7
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    vector<int> v(5); 
    for(int i=0; i<5; i++){
        cin>>v[i];
    }
    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
}