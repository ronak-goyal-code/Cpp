#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    int n = strs.size();
    sort(strs.begin(),strs.end());
    string first = strs[0];
    string last = strs[n-1];
    string s = "";
    for(int i=0; i<(min(first.length(),last.length())); i++){
        if(first[i]==last[i]){
            s += first[i];
        }
        else return s;
    }

    return s;
}