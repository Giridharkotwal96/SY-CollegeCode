//Name :- Giridhar Manohar Kotwal
//Topic :- Menu Drive pgm of SLL


#include<stdio.h>
#include<stdlib.h>


struct node 
{
int data;
struct node *next;
};

struct node *head=NULL;
struct node *newNode;
struct node *temp;
struct node *prevNode;

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



void beginInsertion()
{
newNode=createNode();
if(head==NULL)
{
head=newNode;
newNode->next=NULL;
}
else
{
newNode->next=head;
head=newNode;
}
printf("\nInserted at Begining");
}



void endInsertion()
{
newNode=createNode();
newNode->next=NULL;
if(head==NULL)
newNode=head;
else
{
temp=head;
while(temp->next!=NULL)
temp=temp->next;
temp->next=newNode;
}
printf("\nInserted at end");
}



void locationInsertion()
{
newNode=createNode();
if(head==NULL)
head=newNode;
else
{
int location;
printf("\nEnter the location :- ");
scanf("%d",&location);
if(location==1)
{
newNode->next=head;
head=newNode;
printf("\nInserted at begin");
}
else
{
int i;
temp=head;
for(i=1;i<location-1;i++)
temp=temp->next;
newNode->next=temp->next;
temp->next=newNode;
printf("\nInserted at %d location",location);
}
}
}



void display()
{
if(head==NULL)
printf("\nList is empty");
else
{
temp=head;
printf("\nThe list is :- ");
while(temp!=NULL)
{
printf("|%d|",temp->data);
temp=temp->next;
}	
}
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


void endDeletion()
{
if(head==NULL)
printf("\nList is empty, Underflow");
else
{
temp=head;
if(head->next==NULL)
{
printf("\nNode deleted = %d", head->data);
head=NULL;
free(temp);
}
else
{
while(temp->next !=NULL)
{
prevNode=temp;
temp=temp->next;
}
printf("\nNode is deleted = %d", temp->data);
free(temp);
prevNode->next=NULL;
}
}
}



void locationDeletion()
{
if(head==NULL)
printf("\nList is empty, Underflow");
else
{
temp=head;
if(head->next==NULL)
{
printf("\nNode is deleted :- %d",head->data);
head=NULL;
free(temp);
}
else
{
int location;
printf("\nEnter the location :- ");
scanf("%d",&location);
if(location==1)
{
printf("\nNode is deleted :- %d",temp->data);
head=head->next;
free(temp);
}
else
{
int i;
for(i=1; i<location; i++)
{
prevNode=temp;
temp=temp->next;
}
printf("\nNode is Deleted = %d",temp->data);
prevNode->next=temp->next;
free(temp);
}
}
}
}


void main()
{
int choice;

do{
printf("\n1)BeginInsertion\n2)EndInsertion\n3)LocationInsertion");
printf("\n4)BeginDeletion\n5)EndDeletion\n6)LocationDeletion");

printf("\n7)Display\n8)Exit");
printf("\nEnter the choice :- ");
scanf("%d",&choice);

switch(choice)
{

case 1: beginInsertion();
	break;
case 2: endInsertion();
	break;
case 3: locationInsertion();
	break;
case 4: beginDeletion();
	break;
case 5: endDeletion();
	break;
case 6: locationDeletion();
	break;
case 7: display();
	break;
case 8: printf("\nExit");
	break;
}
}while(choice!=8);
}