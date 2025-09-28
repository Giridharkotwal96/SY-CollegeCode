#include<stdio.h>
#include<stdlib.h>


struct node 
{
int data;
struct node *next;
};

struct node *top=NULL;
struct node *newNode;
struct node *temp;

struct node *createNode()
{
newNode=malloc(sizeof(struct node));
if(newNode==NULL)
printf("\nMemory is not allocated");
else
{
int value;
printf("\nEnter data:- ");
scanf("%d",&value);
newNode->data=value;
newNode->next=NULL;
}
return newNode;
}



void push()
{
newNode=createNode();
if(top==NULL)
{
top=newNode;
//newNode->next=NULL;
}
else
{
newNode->next=top;
top=newNode;
}
printf("\nInserted");
}


void pop()
{
if(top==NULL)
printf("\nStack is empty, Underflow");
else
{
temp=top;
printf("\nElement deleted is %d",temp->data);
top=top->next;
free(temp);
}
}

void display()
{
if(top==NULL)
printf("\nStack is empty");
else
{
temp=top;
while(temp!=NULL)
{
printf("\n%d",temp->data);
temp=temp->next;
}
}
}


void main()
{
printf("\nHere we are implementing Stack using SLL");
int choice;
do
{
printf("\n1)Push\n2)Pop\n3)Display\n4)Exit");
printf("\nEnter the choice :- ");
scanf("%d",&choice);

switch(choice)
{

case 1: push();
	break;

case 2: pop();
	break;

case 3: display();
	break;

case 4: printf("\Exit");
	break;
}
}while(choice!=4);
}