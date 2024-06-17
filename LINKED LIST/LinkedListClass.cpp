#include<iostream>
using namespace std;
class Node{ // user defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList{ // user defined data structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void InsertAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0){
            head = tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void InsertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void InsertAtIdx(int idx,int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) InsertAtHead(val);
        else if(idx==size) InsertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1; i<idx;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index"<<endl;
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i=0;i<idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size==0) cout<<"Linked List Is Empty"<<endl;
        else{
            head = head->next;
            size--;
        }
    }
    void deleteAtTail(){
        if(size==0) cout<<"Linked List Is Empty"<<endl;
        else{
            Node* temp = head;
            while(temp->next!=tail){
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }
    void deleteAtIdx(int idx){
        if(size==0) cout<<"Linked List Is Empty"<<endl;
        else if(idx<0 || idx>=size) cout<<"Invalid Index"<<endl;
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.InsertAtTail(10);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.InsertAtTail(20);
    ll.display();
    ll.InsertAtTail(30);
    ll.display();
    ll.InsertAtHead(30);
    ll.display();
    ll.InsertAtIdx(2,60);
    ll.display();
    ll.InsertAtIdx(4,60);
    ll.display();
    ll.deleteAtIdx(0);
    ll.display();
    cout<<ll.getAtIdx(3)<<endl;
    cout<<ll.size;
}