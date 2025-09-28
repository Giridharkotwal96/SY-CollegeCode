#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};

struct node *head=NULL;
struct node *newNode;

struct node *createNode()
{
newNode= (struct node*)malloc(sizeof(struct node));
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

void endInsert()
{
newNode = createNode();
newNode->next=NULL;
if(head==NULL)
head = newNode;
else
{
struct node *temp;
temp=head;
while(temp->next != NULL)
temp=temp->next;
temp->next = newNode;
}
printf("\nInserted at end");
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

int choice;

printf("\nHere it is code block for EndInsertion\n");

do{
printf("\n1)EndInsert\n2)Display\n3)Exit");
printf("\nEnter the choice:- ");
scanf("%d",&choice);

switch(choice)
{

case 1: endInsert();
 	break;

case 2: display();
	break;

case 3: printf("Exit\n");
	display();
	break;
}

}while(choice!=3);
}