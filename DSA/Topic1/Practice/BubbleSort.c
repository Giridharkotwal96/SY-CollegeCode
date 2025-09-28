#include<stdio.h>
void main()
{
int size, a[10], i, j, temp;

printf("\nEnter the size of array :- ");
scanf("%d",&size);

printf("\nEnter %d elements in array :- ",size);

for(i=0;i<size;i++)
scanf("%d",&a[i]);

printf("\nThe unsorted list is :- ");

for(i=0;i<size;i++)
printf(" %d",a[i]);

//Code block for bubble sort 

for(i=0;i<size;i++)
{
for(j=0;j<size-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\nThe number of passes required are %d ",i);
printf("\nThe list after sorting becomes :- ");

for(i=0;i<size;i++)
printf(" %d",a[i]);
}