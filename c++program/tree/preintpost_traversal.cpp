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

vector<int> pre,in,pos;

void preintpost(Node* root){
    stack<pair<Node*,int>> st;
    st.push({root,1});
    if(root == NULL) return;
    while(st.empty() != true){
        auto it = st.top();
        st.pop();

        if(it.second==1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->left != NULL){
                st.push({it.first->left,1});
            }
        }else if(it.second==2){
            in.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->right != NULL){
                st.push({it.first->right,1});
            }
        }else{
            pos.push_back(it.first->data);
        }
    }
}

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    preintpost(root);
    cout<<"preorder traversal :\n";
    for(auto c:pre){
        cout<<c<<" ";
    }
    cout<<"\n";
    cout<<"inorder traversal :\n";
    for(auto c:in){
        cout<<c<<" ";
    }
    cout<<"\n";
    cout<<"postorder traversal :\n";
    for(auto c:pos){
        cout<<c<<" ";
    }
    return 0;
}