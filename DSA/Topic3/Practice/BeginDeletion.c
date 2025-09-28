#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};

struct node *head =NULL;
struct node *newNode;
struct node *temp ;
struct node *prevNode;

struct node *createNode()
{
newNode= (struct node *)malloc(sizeof(struct node));

if(newNode==NULL)
printf("\nMemory is not allocated");
else
{
printf("\nEnter the data :- ");
scanf("%d",&newNode->data);
newNode->next = NULL;
}
return newNode;
}


void endInsertion()
{
newNode = createNode();
newNode->next=NULL;
if(head==NULL)
head=newNode;
else
{
temp=head;
while(temp->next !=NULL)
temp=temp->next;
temp->next=newNode;
}
printf("\nInserted at end");
}

void beginDeletion()
{
if(head==NULL)
printf("\nList is empty, Underflow");
else
{
temp=head;
printf("\nNode is deleted :- %d",temp->data);
head=head->next;
free(temp);
}
}


void display()
{
if(head==NULL)
printf("\nList is empty");
else
{
struct node *temp=head;
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
printf("\n");
}
}


void main()
{

printf("\nHere it is code block for Begin deletion.");

int choice;

do{

printf("\n1)EndInsertion\n2)BeginDeletion\n3)Display\n4)Exit");
printf("\nEnter the choice :- ");
scanf("%d",&choice);
switch(choice)
{
case 1: endInsertion();
	break;

case 2: beginDeletion();
	break;

case 3: display();
	break;

case 4: printf("\nExit");
	break;
}
}while(choice != 4);
}