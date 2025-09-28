//Name :- Giridhar Manohar Kotwal
//Roll no:- 36
//Code block for DLL

#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *prev;
struct node *next;
};

struct node *head=NULL;
struct node *tail=NULL;
struct node *temp;
struct node *newNode;

struct node *createNode()
{

newNode= malloc(sizeof(struct node));
if(newNode==NULL)
printf("\nMemory is not allocated");
else
{
printf("\nEnter the data :- ");
scanf("%d",&newNode->data);
newNode->next=NULL;
newNode->prev=NULL; 
}
return newNode;
} 

void beginInsert()
{
printf("\nHere we are doing begin insertion");
newNode=createNode();
if(head==NULL)
{
head=newNode;
tail=newNode;
}
else
{
newNode->next=head;
head->prev=newNode;
head=newNode;
}
printf("\nInserted at begin");
}

void endInsert()
{

printf("\nHere we are doing end insertion");
newNode=createNode();
if(head==NULL)
{
head=newNode;
tail=newNode;
}
else
{
tail->next=newNode;
newNode->prev=tail;
tail=newNode;
}
printf("\nInserted at end");
}

void locationInsert()
{

printf("\nHere we are doing location insertion");
newNode=createNode();
int location;
if(head==NULL)
{
head=newNode;
tail=newNode;
}
else
{
printf("\nEnter the location :- ");
scanf("%d",&location);

if(location==1)
{
newNode->next=head;
head->prev=newNode;
head=newNode;
}
else
{
temp=head;
int i;
for(i=1;i<location-1;i++)
temp=temp->next;
struct node *nextNode=temp->next;
newNode->next=temp->next;
temp->next=newNode;
nextNode->prev=newNode;
}
}
printf("\nInserted at location");
}

void display()
{
if(head==NULL)
printf("\nList is empty");
else
{
temp=head;
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
}
}

void beginDeletion()
{
if (head == NULL)
printf("\nList is empty, Underflow");
else
{
temp = head;
printf("\nNode deleted is %d", temp->data);
if (head == tail) // only one node
{
head = NULL;
tail = NULL;
}
else
{
head = head->next;
head->prev = NULL;
}
free(temp);
}
}


void endDeletion()
{
if(head==NULL)
printf("\nThe list is empty, underflow");
else
{
if(head==tail)
{
temp=head;
printf("\nNode deleted is %d", temp->data);
free(temp);
head=tail=NULL;
}
else
{
temp=tail;
printf("\nNode deleted is %d",temp->data);
tail=tail->prev;
tail->next=NULL;
free(temp);
}
}
}

void loationDeletion()
{
if(head==NULL)
printf("\nList is empty, underflow");
else
{
if(head==tail)
{
printf("\nNode deleted is %d",head->data);
free(head);
head=tail=NULL;
}
else
{
temp=head;
int location;
printf("\nEnter the location :- ");
scanf("%d",&location);
if(location==1)
{
temp=head;
printf("\nDeleted node is %d",temp->data);
head = head->next;
head->prev = NULL;
free(temp);
}
else
{
temp=head;
for(int i=1;i<location;i++)
temp=temp->next;
printf("\nDeleted node is %d",temp->data);
struct node *prevNode=temp->prev;
struct node *nextNode=temp->next;
free(temp);
prevNode->next=nextNode;
nextNode->prev=prevNode;
}
}
}
}

void main()
{
printf("\nCode block for Doubly linked list");
int choice;
do
{
printf("\n1)BeginInsert\n2)EndInsert\n3)LocationInsert\n4)Display");
printf("\n5)BeginDeletion\n6)Enddeletion\n7)LocationDeletion\n8)Exit");
printf("\nEnter the choice :- ");
scanf("%d",&choice);
switch(choice)
{
case 1: beginInsert();
	break;

case 2: endInsert();
	break;

case 3: locationInsert();
	break;

case 4: display();
	break;

case 5: beginDeletion();
	break;

case 6: endDeletion();
	break;

case 7: loationDeletion();
	break;

case 8: printf("\nExit");
	break;
}
}while(choice != 8);
}