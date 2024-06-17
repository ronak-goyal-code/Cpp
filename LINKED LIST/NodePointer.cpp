#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void display(Node* head){ // pass by value
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int size(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void displayrec(Node* head){
    if(head==NULL){
        cout<<endl;
        return;
    }
    cout<<head->val<<" ";
    displayrec(head->next);
}
void reverse(Node* head){
    if(head==NULL){
        return;
    }
    reverse(head->next);
    cout<<head->val<<" ";
}
void InsertAtEnd(Node* head,int val){
    Node* temp = new Node(val);
    while(head->next!=NULL) head = head->next;
    head->next = temp;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    displayrec(a);
    reverse(a);
    cout<<endl;
    InsertAtEnd(a,60);
    display(a);
    cout<<"Size of Linked List is : "<<size(a);
}