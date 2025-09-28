#include<stdio.h>

int stack[10], size, i;
int top=-1;

void push()
{
int value;
if(top==size-1)
printf("The stack is full, overflow");
else
{
top++;
printf("\nEnter the value to be inserted : ");
scanf("%d",&value);

stack[top]=value;

printf("\nInserted");
}

}

void pop()
{
if(top==-1)
printf("Stack is empty, underflow");
else
{
printf("\nElement deleted = %d",stack[top]);
top--;

}
}

void display()
{
if(top==-1)
printf("\nEmpty Stack");
else
{
printf("\nElement of stack are : ");
for(i=top;i>=0;i--)
printf("\n%d",stack[i]);
}
}


void main()
{
int choice;
printf("Enter the size of array : ");
scanf("%d",&size);

do
{
printf("\n1) Push \n2) Pop \n3) Display \n4) Exit");
printf("\nEnter the choice : ");
scanf("%d",&choice);

switch(choice)
{
case 1: push();
break;

case 2: pop();
break;

case 3: display();
break;

case 4: printf("\nExit");
break;
}
}while(choice != 4);
}