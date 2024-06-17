#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;

    // worst method
    // int max = 0;
    // for(int i=0; i<s.length(); i++){
    //     int count = 1;
    //     for(int j=i+1;  j<s.length(); j++){
    //         if(s[j]==s[i]){
    //             count++;
    //         }
    //     }
    //     if(max<count) max = count;
    // }

    // for(int i=0; i<s.length(); i++){
    //     int count = 1;
    //     for(int j=i+1;  j<s.length(); j++){
    //         if(s[j]==s[i]){
    //             count++;
    //         }
    //     }
    //     if(max==count){
    //         cout<<s[i]<<" "<<max<<endl;
    //     }
    // }
    
    // special array method
    vector<int> v(26,0);
    for(int i=0; i<s.length(); i++){
        int ascii = (int)s[i];
        v[ascii-97]++;
    }

    int max = v[0];
    int index;
    for(int i=0; i<26; i++){
        if(v[i]>max){
            max = v[i];
        }

    }

    for(int i=0; i<26; i++){
        if(v[i]==max){
            index = i+97;
            cout<<max<<" "<<char(index)<<endl;
        }

    }

}