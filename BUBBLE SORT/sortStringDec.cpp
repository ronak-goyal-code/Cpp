#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter string : ";
    cin>>s;
    string t = "";
    for(int i=0; i<s.length(); i++){
        if(s[i]>='x') t = t + s[i];
    }

    for(int i=0; i<t.length()-1; i++){
        bool flag = true;
        for(int j=0; j<t.length()-1-i; j++){
            if(t[j]>t[j+1]){
                swap(t[j],t[j+1]);
                flag = false;
            }
        }
        if(flag==true){
            break;
        }
    }
    reverse(t.begin(),t.end());
    cout<<t;
}