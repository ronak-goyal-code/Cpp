#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    for(int i=0; i<n; i++){
        cout<<q.front()<<" ";
        int x = q.front();
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverse(queue<int>& q){
    int n = q.size();
    stack<int> s;
    for(int i=0; i<n; i++){
        int x = q.front();
        q.pop();
        s.push(x);
    }
    for(int i=0; i<n; i++){
        int x = s.top();
        s.pop();
        q.push(x);
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reverse(q);
    display(q);
    }