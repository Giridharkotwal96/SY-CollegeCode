#include<stdio.h>

int stack[10],size;
int top = -1;

void push()
{
do
{
int value;
if(top==size-1)
printf("In stack in full , overflow ");
else
{
top++;
printf("\nEnter the value to be inserted : ");
scanf("%d",&value);
stack[top]=value;

printf("\nInserted");
}
}while(top<size-1);
}

void main()
{
printf("Enter the size of array : ");
scanf("%d",&size);
push();
}