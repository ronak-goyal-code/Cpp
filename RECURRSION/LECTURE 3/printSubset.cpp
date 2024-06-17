#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subset(string ans , string original,int idx){
    if(idx==original.length()){
        cout<<ans<<endl;
        return ;
    }
    char ch = original[idx];
    subset(ans,original,idx+1);
    subset(ans+ch,original,idx+1);
    return ;
}
void storesubset(string ans , string original,int idx,vector<string> &v){
    if(idx==original.length()){
        v.push_back(ans);
        return ;
    }
    char ch = original[idx];
    storesubset(ans,original,idx+1,v);
    storesubset(ans+ch,original,idx+1,v);
    return ;
}
int main(){
    string str = "abcd";
    //subset("",str,0);
    vector<string>v;
    storesubset("",str,0,v);
    for(string ele : v){
        cout<<ele<<endl;
    }
    return 0;
}