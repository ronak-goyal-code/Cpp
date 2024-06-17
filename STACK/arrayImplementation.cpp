#include<iostream>
using namespace std;
class Stack{ // user defined data structure
public:
    int arr[5];
    int idx;
    Stack(){
        idx = -1;
    }
    void push(int val){
        if(idx==4){
            cout<<"Stack Is Full !"<<endl;
            return ;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){
        if(idx==-1){
            cout<<"Stack Is Empty !"<<endl;
            return ;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"Stack Is Empty !"<<endl;
            return -1;
        }
        return arr[idx];
    }  
    int size(){
        return idx+1;
    }
    void display(){
        for(int i=0; i<=idx; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.top()<<" ";

}