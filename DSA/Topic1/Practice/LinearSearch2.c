#include<stdio.h>

void main()
{

int size, i, a[10],search;
int flag = 0;

printf("\nEnter the size of an array : ");
scanf("%d",&size);

printf("\nEnter %d Elements in a array : ",size);

for(i=0 ; i<size ; i++)
scanf("%d",&a[i]);

for(i=0 ; i<size ; i++)
printf("%d ",a[i]);

printf("\nThe Element is to be searched : ");
scanf("%d", &search);

for(i=0 ; i<size ; i++)
{
if(search==a[i])
{
flag = 1;
break;
}
}
if(flag==1)
printf("\nThe element %d is found at %d location : ", search,i);
else
printf("\nThe element is not found");

}