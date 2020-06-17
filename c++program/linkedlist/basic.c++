//single linked list basic

#include<bits/stdc++.h>
using namespace std;

//class of linked list structure
class Node{
public:
    int data;
    Node* next;
};

//function to print linked list
void printList(Node* n) 
{ 
    while (n != NULL) { 
        cout << n->data << " "; 
        n = n->next; 
    } 
} 
 

int main(){
    //initializing the address
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    //creating new object for the class
    head = new Node();
    second = new Node();
    third = new Node();

    //giving data to the nodes

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    //calling the print function to print linked list
    printList(head);

    return 0;
}