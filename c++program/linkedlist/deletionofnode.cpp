//deleting a node from linked list

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void push(Node** head_ref,int new_data){
    Node* new_node = new Node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)= new_node;
}

void deleteNode(Node**head_ref,int key){
    Node* temp = *head_ref,*prev;
    if(temp != NULL && temp->data == key){
        *head_ref = temp->next;
        free(temp);
        return;
    }

    //keep the track of the previous node
    while(temp != NULL && temp-> data != key){
        prev = temp;
        temp = temp->next;
    }
    
    if(temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}

void printlist(Node* node){
    while(node != NULL){
        cout<<node->data<<" ";
        node=node->next;
    }
}

int main(){
    Node* head = NULL;
    push(&head,7);
    push(&head,1);
    push(&head,3);
    push(&head,2);
    push(&head,8);
    push(&head,6);

    cout<<"created list \n";
    printlist(head);
    cout<<"\n";
    deleteNode(&head,3);
    cout<<"after deletion \n";
    printlist(head);

    return 0;
}