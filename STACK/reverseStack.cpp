#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    print(st);
    stack<int> temp;
    // empty st into temp
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    stack<int> rt;
    // empty temp into rt
    while(temp.size()>0){
        rt.push(temp.top());
        temp.pop();
    }
    // empty rt into st
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    print(st);
}