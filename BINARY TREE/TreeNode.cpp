#include<iostream>
#include<algorithm>
#include<climits>
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

void displayTree(Node*  root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

int sum(Node* root){
    if(root == NULL) return 0;
    int ans = root->val + sum(root->left) + sum(root->right);
    return ans;
}

int size(Node* root){
    if(root == NULL) return 0;
    int sizeOfTree = 1 + size(root->left) + size(root->right);
    return sizeOfTree;
}

int maxNode(Node* root){
    if(root == NULL) return INT_MIN;
    return max(root->val,max(maxNode(root->left),maxNode(root->right)));
}

int levelNo(Node* root){
    if(root == NULL) return 0;
    int count = 1 + max(levelNo(root->left),levelNo(root->right));
    return count;
};

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
    displayTree(a);
    cout<<endl;
    cout<<sum(a)<<" "<<size(a)<<" "<<maxNode(a)<<" "<<levelNo(a);
}