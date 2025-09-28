#include<stdio.h>

int stack[10];
int top= -1;
int size;
void push()
{
if(top== size-1)
printf("\nThe stack is full, overflow");
else
{
top++;
printf("\nEnter the value to be inserted :- ");
scanf("%d",&stack[top]);
printf("\nInserted");
}

}

void main()
{
printf("Enter the size of stack :- ");
scanf("%d",&size);

push();
push();
push();
push();
push();
push();
}