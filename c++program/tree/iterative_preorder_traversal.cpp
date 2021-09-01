#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data = val;
        left=right=NULL;
    }
};

void preorder(Node *root){
    stack<Node*> s;
    s.push(root);
    while(s.empty()==false){
        Node *curr = s.top();
        cout<<curr->data<<" ";
        s.pop();
        if(curr->right != NULL){
            s.push(curr->right);
        }
        if(curr->left != NULL){
            s.push(curr->left);
        }
    }
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    preorder(root);
    return 0;
}