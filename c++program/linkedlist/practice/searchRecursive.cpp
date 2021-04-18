#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node (int x){
        data = x;
        next = NULL;
    }
};

int search(Node *head,int y)
{
    if(head == NULL){
        return -1;
    }
    if(head->data == y){
        return 1;
    }
    else{
        int res=search(head->next,y);
        if(res == -1) return -1;
        else{
            return (res + 1);
        }
    }
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next=temp1;
    temp1->next=temp2;
    int y;
    cout<<"enter element to search";
    cin>>y;
    int result=search(head,y);
    cout<<result;
    return 0;
}