#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void PreOrder(Node* root){
    if(root==NULL) return ;
    cout<<root->val<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
void PreOrderItr(Node* root){
    stack<Node*> s;
    if(root!=NULL) s.push(root);
    while(s.size()>0){
        Node* temp = s.top();
        s.pop();
        cout<<temp->val<<" ";
        if(temp->right) s.push(temp->right);
        if(temp->left) s.push(temp->left);
    }
}
void InOrder(Node* root){
    if(root==NULL) return ;
    InOrder(root->left);
    cout<<root->val<<" ";
    InOrder(root->right);
}
void InOrderItr(Node* root){
    stack<Node*> st;
    Node* node = root;
    while(st.size()>0 || node){
        if(node){
            st.push(node);
            node = node->left;
        }
        else{
            Node*  temp = st.top();
            st.pop();
            cout<<temp->val<<" ";
            node = temp->right;
        }
    }
}
void PostOrder(Node* root){
    if(root==NULL) return ;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->val<<" ";
}
void PostOrderItr(Node* root){
    stack<Node*> st;
    stack<int> h;
    if(root!=NULL) st.push(root);
    while(st.size()>0){
        Node* temp = st.top();
        st.pop();
        h.push(temp->val);
        if(temp->left!=NULL) st.push(temp->left);
        if(temp->right!=NULL) st.push(temp->right);
    }
    while(h.size()>0){
        cout<<h.top()<<" ";
        h.pop();
    }
}
void nthLevel(Node* root,int curr, int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return ;
    }
    nthLevel(root->left,curr+1,level);
    nthLevel(root->right,curr+1,level);
}
int levelNo(Node* root){
    if(root == NULL) return 0;
    int count = 1 + max(levelNo(root->left),levelNo(root->right));
    return count;
};
void LevelOrder(Node* root){
    int l = levelNo(root);
    for(int i=1;i<=l;i++){
        nthLevel(root,1,i);
    }
}
void LevelOrderQueue(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
     }
}
int main(){
    Node* a = new Node(1); // root
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    PreOrder(a);
    cout<<endl;
    InOrder(a);
    cout<<endl;
    PostOrder(a);
    cout<<endl;
    nthLevel(a,1,3);
    cout<<endl;
    LevelOrder(a);
    cout<<endl;
    LevelOrderQueue(a);
    cout<<endl;
    PreOrderItr(a);
    cout<<endl;
    PostOrderItr(a);
    cout<<endl;
    InOrderItr(a);
}