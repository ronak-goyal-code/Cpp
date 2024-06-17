#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool balbrac(string s){
    stack<char> st;
    st.push(s[0]);
    for(int i=1; i<s.size();i++){
        if(s[i]=='(') st.push(s[i]);
        else {
            if(st.top()==')') return false;
            else if(st.size()==0) return true;
            else st.pop();
        }
    }
    if(st.size()==0) return true ;
    else return false;
}
int main(){
    string s = "(()()";
    cout<<balbrac(s);
}
