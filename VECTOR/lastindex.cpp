#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(3);
    v.push_back(2);
    v.push_back(8);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    int x = 2;
    // forward loop method
    // int idx = -1;
    // for(int i=0; i<v.size(); i++){
    //     if(v[i]==x){
    //         idx = i;
    //     }
    // }
    // cout<<idx;
    // backward loop method 
    for(int i = v.size()-1; i>=0; i--){
        if(v[i]==x){
            cout<<i;
            break;
        }
    }

}