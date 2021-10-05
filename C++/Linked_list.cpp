#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};
void display(Node *n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}

// function to add a node
void append(Node** head_ptr, int new_data) 
{ 
    Node *new_node = new Node;
    Node *trav = *head_ptr;
    new_node->data = new_data; 
    new_node->next = NULL; 
    if (*head_ptr == NULL) 
    { 
        *head_ptr = new_node; 
        return; 
    } 
    while (trav->next != NULL) 
        trav = trav->next; 
    trav->next = new_node; 
    return; 
} 
int main()
{
    // Just maintaining one head pointer to access the complete list
    Node * head = new Node;
    head = NULL;
    append(&head,1);
    append(&head,2);
    append(&head,3);
    
    display(head);
    return 0;
}
