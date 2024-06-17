#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // // printing in reverse order -> emptying the stack
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    // we will use extra stack
    stack<int> temp;
    cout<<"Stack top to bottom : ";
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;

    // putting elements back from temp to st
    cout<<"Stack bottom to top : ";
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}