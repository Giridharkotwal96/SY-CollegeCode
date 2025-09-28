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
int value;
newNode = malloc(sizeof(struct node));

if(newNode==NULL)
printf("\nMemory is not allocated");
else
{
printf("\nEnter the data :- ");
scanf("%d",&value);
newNode->data=value;
newNode->next=NULL;
}
printf("|%d| |%d|", newNode->data, newNode->next);
}

void main()
{
printf("\nHere it is a code block for Createtion of node");

struct node *head = createNode();  // create first node

if (head != NULL) 
printf("Node created successfully with data = %d\n", head->data);
}