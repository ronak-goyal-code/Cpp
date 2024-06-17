#include<iostream>
#include<climits>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter Sentnce : ";
    getline(cin,s);

    vector<string> v;
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }

    sort(v.begin(),v.end());
    int maxi = 1;
    int count = 1;
    for(int i=0; i<v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        maxi = max(maxi,count);
    }

    count = 1;
    for(int i=0; i<v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else count = 1 ;
        if(count==maxi){
            cout<<v[i]<<" "<<maxi<<endl;
        }
    }

}