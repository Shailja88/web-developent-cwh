
// 1. Write a program to implement a linked list. Program
// must include following
// function in it:
// a. Create a linked list
// b. Insert an element at the beginning, end and at a specified
// position in the list.
// c. Delete an element at the beginning, end and at a
// specified location in the list.
// d. Display the linked list.

#include<bits/stdc++.h>
using namespace std ;
class Node {
public:
int data ;
Node * next;
}*temp;
void create(Node**head_ref){
int choice =1;
Node* temp;
while(choice){
Node* newnode= new Node();
cout<<"ENTER THE DATA YOU WANNA INSERT ";
cin>>newnode->data;
newnode->next=NULL;

if(*head_ref==NULL){
*head_ref=temp=newnode;
}
else {
temp->next=newnode;
temp=newnode;
}
cout<<"DO YOU WANNA CONTINUE ";
cin>>choice;
}
}
void front (Node** head_ref)
{
/* 1. allocate node */
Node* new_node = new Node();
int data;
cout<<"Enter the data u wanna insert? ";
cin>>data;
new_node->data = data ;

/* 3. Make next of new node as head */
new_node->next = (*head_ref);

/* 4. move the head to point to the new node */
(*head_ref) = new_node;
}

void display(Node* node )
{
while (node != NULL)
{
cout <<node->data <<"";
node = node->next;
}
}

void end (Node** head_ref)
{
Node *newnode =new Node ();
int data;
cout<<"Enter the data u wanna insert? ";
cin>>data;
newnode->data = data ;
temp=*head_ref;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=newnode;
}

void InsertAtPosition (Node**head_ref , int index){
Node *newnode = new Node();

int data;
cout<<"Enter the data u wanna insert ";
cin>>data;
newnode->data = data ;
int i=0;
Node*temp=*head_ref;
while(i<index-1){
temp=temp->next;
i++;
}
newnode->next=temp->next;
temp->next=newnode;
}
void deleteFirstNode(Node** head_ref)
{
Node * ptr = (*head_ref);
(*head_ref) = (*head_ref)->next;
free(ptr);
}

void deleteLastNode(Node** head_ref){
Node *p = (*head_ref);
Node *q = (*head_ref)->next;
while(q->next !=NULL)
{
p = p->next;

q = q->next;
}

p->next = NULL;
free(q);
}

void deleteNode(Node** head_ref, int index){
Node *p = (*head_ref);
Node *q = (*head_ref)->next;
for (int i = 0; i< index-1; i++)
{
p = p->next;
q = q->next;
}

p->next = q->next;
free(q);
}

int main(){
Node*head = NULL;
create(&head);
display(head);
cout<<endl;
front(&head);

display(head);
cout<<endl;
end(&head);
display(head);
cout<<endl;
InsertAtPosition(&head,1);
display(head);
cout<<endl;
deleteFirstNode(&head);
display(head);
cout<<endl;
deleteLastNode(&head);
display(head);
cout<<endl;
deleteNode(&head,1);
display(head);
cout<<endl;
}