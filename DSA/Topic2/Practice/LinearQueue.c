#include<stdio.h>

int rear = -1;
int front = -1;
int queue[10];
int size;

void enqueue()
{
if(rear==size-1)
printf("\nQueue is full, Overflow");
else
{
rear++;
printf("\nEnter element to be inserted :- ");
scanf("%d",&queue[rear]);
printf("\nInserted");
if(front==-1)
front=0;
}
}

void dequeue()
{
if(front==-1)
printf("\nQueue is empty, underflow");
else
{
printf("\nElement is to be deleted :- %d",queue[front]);
front++;
if(front>rear)
front=rear=-1;
}
}

void display()
{
int i;
if(front==-1)
printf("\nQueue is empty");
else
{
printf("\nElement of queue are :- ");
for(i=front; i!=rear; i++)
printf(" %d",queue[i]);
}
}

void main()
{
int choice;
printf("Enter the size of array :- ");
scanf("%d",&size);

do
{
printf("\n1) Enqueue \n2) Dequeue \n3) Display \n4) Exit");
printf("\nEnter the choice : ");
scanf("%d",&choice);

switch(choice)
{
case 1: enqueue();
break;

case 2: dequeue();
break;

case 3: display();
break;

case 4: printf("\nExit");
break;
}
}while(choice != 4);
}