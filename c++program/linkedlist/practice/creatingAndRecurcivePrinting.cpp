#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
7
void printList(Node *head)
{
    if(head == NULL) return;

    cout<<(head->data)<<"->";
    printList(head->next);
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next=temp1;
    temp1->next=temp2;
    printList(head);
    cout<<"NULL";
    return 0;
}