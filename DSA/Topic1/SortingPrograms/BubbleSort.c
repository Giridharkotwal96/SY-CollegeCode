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

// code block for BubbleSort

for(i=0 ; i<size; i++)
{
for(j=0 ; j<size-1 ; j++)
{
if(a[j]>a[j+1])
{
temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
}
}
}

printf("\nThe element after sorting : ");

for(i=0 ; i<size ; i++)
{
printf(" %d ",a[i]);
}

}