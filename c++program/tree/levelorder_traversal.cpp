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

void levelorder(Node *root){
    if(root==NULL){
        return;
    }
    queue<Node *> q;
    q.push(root);
    while(q.empty()==false){
        Node *curr = q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    levelorder(root);
    return 0;
}