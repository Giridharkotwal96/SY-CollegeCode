#include<stdio.h>
void main()
{

int size,i,a[10],search;

printf("\nEnter the size of array : ");
scanf("%d",&size);

printf("Enter the %d elements in array : ",size);

for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}

printf("\nThe elements are :");
for(i=0;i<size;i++)
{
printf(" %d ", a[i]);
}

printf("\nThe element to be searching is : ");
scanf("%d",&search);

int low=0;
int high=size-1;
int mid;
while(low<=high)
{
mid=(low+high)/2;
if(search==a[mid])
{
printf("\nThe element %d is found at %d location : ",search,mid);
break;
}
if(search>a[mid])
low=mid+1;
else
high=mid-1;
}
if(low>high)
printf("\nThe element is not found");
}