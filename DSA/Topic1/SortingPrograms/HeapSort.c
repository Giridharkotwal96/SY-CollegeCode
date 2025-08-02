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

// code block for SelectionSort

int big;
for(i=size-1 ; i>=0 ; i--)
{
big = i;

for(j = i-1 ; j>=0 ; j--)
{
if(a[j]>a[big])
{
big = j;
}
}

temp = a[big];
a[big] = a[i];
a[i] = temp;
}

printf("\nThe element before sorting : ");

for(i=0 ; i<size ; i++)
{
printf(" %d ",a[i]);
}
}