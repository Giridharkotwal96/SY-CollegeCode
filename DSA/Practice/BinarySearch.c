#include<stdio.h>
void main()
{

int size, a[12], i, search;

printf("\nEnter the size of array : ");
scanf("%d",&size);

printf("\nEnter the %d elements in array : ",size);

for(i=0 ; i<size ; i++)
scanf("%d",&a[i]);

for(i=0 ; i<size ; i++)
printf("%d ",a[i]);

printf("\nThe element is to be searched : ");
scanf("%d",&search);

int low = 0;
int high = size-1;
int mid;
while(low<=high)
{
mid = (high+low)/2;
{
if(search==a[mid])
{
printf("\nThe element %d is found at %d location ", search, mid);
break;
}
if(search>a[mid])
low = mid+1;
else
high = mid-1;
}
}
if(low>high)
printf("\nThe element is not found");
}