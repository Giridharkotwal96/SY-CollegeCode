#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *front=NULL;
struct node *rear=NULL;
struct node *newNode;
struct node *nextNode;
struct node *prevNode;
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
    
    if(front == NULL)
    {
        front = newNode;
        rear = newNode;
        
        front->next = front;
        front->prev = front;
    }
    else
    {
        rear->next = newNode;
        newNode->prev = rear;
        
        rear = newNode;
        
        rear->next = front;
        front->prev = rear;
    }
    printf("\nInserted");
}

void dequeue()
{
    if (front == NULL)
        printf("\nQueue is empty, Underflow");
    else
    {
        temp = front;
        printf("\nNode deleted is %d", temp->data);
        
        if (front == rear) 
        {
            front = NULL;
            rear = NULL;
        }
        else
        {
            front = front->next;
            
            front->prev = rear;
            rear->next = front;
        }
        free(temp);
    }
}

void display()
{
    if(front == NULL)
        printf("\nQueue is empty");
    else
    {
        temp = front;
        printf("\nThe Queue (Front to Rear) is: ");
        
        do 
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        } while(temp != front);
        
        printf("(Circled back to Front)");
    }
}

void main()
{
    printf("\nHere we are implimenting Circular queue using DLL");

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
    }while(choice!=4);    
}