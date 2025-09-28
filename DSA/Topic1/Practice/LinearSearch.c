#include<stdio.h>

// In this pgm we do a linear search
// Also we are finding number of occurance 

void main()
{

int size, a[10], search, i, count;
int flag=0;

printf("\nEnter the size of an array : ");
scanf("%d", &size);

printf("\nEnter %d element in array : ", size);

for(i=0 ; i<size ; i++)
{
scanf("%d", &a[i]);
}

for(i=0 ; i<size ; i++)
printf(" %d ", a[i]);

printf("\nThe element to be searched : ");
scanf("%d", &search);

for(i=0 ; i<size ; i++)
{
if(search==a[i])
{
flag = 1 ;
count += 1;
}
}
if(flag == 1)
printf("\nThe element %d is found at %d index" ,search,i);
else
printf("\nThe element %d is not found", search);

printf("\nThe Element %d is %d time present in array ", search ,count);
}