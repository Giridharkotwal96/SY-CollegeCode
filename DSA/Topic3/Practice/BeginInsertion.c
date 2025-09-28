#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};

struct node *head = NULL;
struct node *newNode;

struct node *createNode()
{
newNode = (struct node*)malloc(sizeof(struct node));

if(newNode==NULL)
printf("\nMemory is not allocated");
else
{
printf("\nEnter the data :- ");
scanf("%d",&newNode->data);
newNode->next=NULL;
}
return newNode;
}

void beginInsert()
{
newNode = createNode();
if(head==NULL)
{
head=newNode;
newNode->next=NULL;
}
else
{
newNode->next = head;
head =newNode;
}
printf("\nInserted at begining");
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
printf(" %d->",temp->data);
temp = temp->next;
}
printf("\n");
}
}
void main()
{
printf("\nHere it is a code block for BeginInsertion of node");

int choice;

do{
printf("\n1)BeginInsert\n2)Display\n3)Exit");
printf("\nEnter the choice");
scanf("%d",&choice);

switch(choice)
{

case 1 : beginInsert();
	 break;

case 2 : display();
	 break;

case 3: printf("\nExit");
	break;

}
}while(choice!=3);

}