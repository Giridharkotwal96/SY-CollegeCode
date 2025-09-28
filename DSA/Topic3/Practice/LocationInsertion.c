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
printf("Memory is not allocated ");
else
{
printf("\nEnter the data :- ");
scanf("%d",&newNode->data);
newNode->next=NULL;
}
return newNode;
}
void locationInsert()
{
newNode=createNode();
if(head==NULL)
head= newNode;
else
{
int location;
printf("\nInserted location :- ");
scanf("%d",&location);
if(location==1)
{
newNode->next=head;
head=newNode;
printf("\nInserted at begining");
}
else
{
struct node *temp=head;
int i;
for(i=0;i<location-1;i++)
temp=temp->next;
newNode->next=temp->next;
temp->next=newNode;
printf("\nInserted at %d location ", location);
}
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
int choice;

do{
printf("\n1)LocationInsert\n2)Display\n3)Exit");
printf("\nEnter the choice:- ");
scanf("%d",&choice);

switch(choice)
{
case 1: locationInsert();
	break;

case 2: display();
	break;

case 3: printf("\nExit\n");
	display();
	break;
}
}while(choice!=3);
}