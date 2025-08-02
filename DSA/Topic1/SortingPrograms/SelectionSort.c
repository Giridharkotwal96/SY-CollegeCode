#include<stdio.h>
void main()
{

int size, a[10], i, j, temp;

printf("\nEnter the size of an array : ");
scanf("%d",&size);

printf("\nEnter %d elements in array : ",size);

for(i=0 ; i<size ; i++)
{
scanf("%d",&a[i]);
}

printf("\nThe element before sorting : ");

for(i=0 ; i<size ; i++)
{
printf(" %d ",a[i]);
}

// code block for SelectionArray

int small;
for(i=0 ; i<size-1 ; i++)
{
small = i;

for(j = i+1 ; j<size ; j++)
{
if(a[j] < a[small])
{
small = j;
}
}

temp = a[small];
a[small] = a[i];
a[i] = temp;
}

printf("\nThe element before sorting : ");

for(i=0 ; i<size ; i++)
{
printf(" %d ",a[i]);
}
}