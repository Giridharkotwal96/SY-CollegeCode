#include<stdio.h>
int stack[10];
int top=-1;
int size;
void push()
{
	int value;
	if(top==size-1)
		printf("\nStack is Full, Overflow");
	else
	{
		top++;
		printf("\nEnter Value to be iNserted into stack");
		scanf("%d",&value);
		stack[top]=value;
		printf("\nInserted");
	}
}
void pop()
{
	if(top==-1)
		printf("\nStack is Empty,Underflow");
	else
	{
		printf("\nElement Deleted=%d",stack[top]);
		top--;
	}
}
void display()
{
	int i;
	if(top==-1)
		printf("\nStack is Empty");
	else
	{
		printf("\nElements of Stack are: ");
		for(i=size-1;i>=0;i--)
			printf("\n%d",stack[i]);
	}
}
void main()
{
int choice;
	printf("\nEnter Size of Stack");
	scanf("%d",&size);
	do
	{
		printf("\n 1:Push 2:Pop 3:Display 4:Exit");
	printf("\nEnter Choice");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:push();
		break;
	case 2:pop();
		break;
	case 3: display();
		break;
	case 4: printf("\nExit");
	}
	}while(choice!=4);
}