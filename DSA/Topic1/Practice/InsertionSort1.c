#include<stdio.h>
void main()
{
int size, a[10], i, j, sorted;

printf("\nEnter the size of array :- ");
scanf("%d",&size);

printf("\nEnter %d elements in array :- ",size);

for(i=0;i<size;i++)
scanf("%d",&a[i]);

printf("\nThe unsorted list is :- ");

for(i=0;i<size;i++)
printf(" %d",a[i]);

//Code block for insertion sort

for(i=1;i<size;i++)
{
sorted=a[i];
for(j=i-1;j>=0 && sorted<a[j];j--)
{
a[j+1]=a[j];
}
a[j+1]=sorted;
}
printf("\nThe sorted list becomes :- ");
for(i=0;i<size;i++)
printf(" %d",a[i]);
}
