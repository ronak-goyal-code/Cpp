#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // you need not mention the size.
    // inserting / input do not use []
    v.push_back(6);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(8);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    // if you want to access elements / update then [] can be used.
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";

}