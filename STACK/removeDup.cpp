#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
string remDup(string str){
    string s = "";
    stack<char> st;
    st.push(str[0]);
    for(int i=1; i<str.size(); i++){
        if(str[i]!=st.top()){
            st.push(str[i]);
        }
    }
    while(st.size()>0){
        s = s + st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string s = "aaabbccddddeefffgggg";
    cout<<remDup(s);
}