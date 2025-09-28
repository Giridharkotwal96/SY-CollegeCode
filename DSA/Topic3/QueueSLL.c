#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;
struct node *newNode;
struct node *temp;

struct node *createNode()
{
    newNode = malloc(sizeof(struct node));
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

void enqueue()
{
    newNode = createNode();
    if(front==NULL)
    {
        front=newNode;
        rear=newNode;
    }
    else
    {
        rear->next=newNode;
        rear=newNode;
    }
    printf("\nInserted at end");
}

void dequeue()
{
    if(front==NULL)
    printf("\nQueue is Empty, Underflow");
    else
    {
        if(front==rear)
        {
            printf("Deleted element is :- %d", front->data);
            front=rear=NULL;
        }
        else
        {
            temp=front;
            printf("\nDeleted element is :- %d",temp->data);
            front=front->next;
            free(temp);
        }
    }
}

void display()
{
    if(front==NULL)
    printf("\nQueue is empty");
    else
    {
        temp=front;
        printf("\nThe elements are :- ");
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
    }
}


void main()
{
    printf("\nHere we are implementing Queue using linked list");

    int choice;
    do
    {
        printf("\n1)Enqueue\n2)Dequeue\n3)Display\n4)Exit");
        printf("\nEnter the choice :-");
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
        }
    }while(choice != 4);
}