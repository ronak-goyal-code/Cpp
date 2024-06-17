#include<iostream>
#include<stack>

using namespace std;

void reverse(stack<int>& st){
    if(st.size()==0) return ;
    int x = st.top();
    st.pop();
    st.push(x);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    stack<int> gt;
    stack<int> pt;

    while(st.size()>=0){
        gt.push(st.top());
        st.pop();
    }
    while(gt.size()>=0){
        pt.push(gt.top());
        gt.pop();
    }
    while(pt.size()>=0){
        st.push(pt.top());
        pt.pop();
    }

}