#include<iostream>
#include<queue>
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
int main(){
    queue<int> q;
    // push
    // pop
    // front -> top
    // size , empty
    // back;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.size()<<endl;  // 5
    cout<<q.front()<<endl; // 10
    cout<<q.back()<<endl;  // 50
    q.pop();
    cout<<q.size()<<endl;  // 4
    cout<<q.front()<<endl; // 20
    display(q);
    }