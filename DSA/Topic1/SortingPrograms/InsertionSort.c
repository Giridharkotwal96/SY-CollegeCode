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

// code block for InsertionSort

for(i=1 ; i<size ; i++)
{
int sorted = a[i];
for(j =i-1 ; j>=0 && sorted<a[j] ; j--)
{
a[j+1] = a[j];
}
a[j+1] = sorted;
}

printf("\nThe element after sorting : ");

for(i=0 ; i<size ; i++)
{
printf(" %d ",a[i]);
}

}