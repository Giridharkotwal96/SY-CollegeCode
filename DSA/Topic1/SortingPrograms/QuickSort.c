#include<stdio.h>
int partition(int a[],int low,int high)
{
int temp;
int pivote=a[low];
int i=low;
int j=high;

do
{
while(a[i]<=pivote)
i++;
while(a[j]>pivote)
j--;

if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}

}while(i<j);

temp=a[low];
a[low]=a[j];
a[j]=temp;

return j;
}

void quicksort(int a[],int low,int high)
{
int j;
if(low<high)
{
j=partition(a,low,high);
quicksort(a,low,j-1);
quicksort(a,j+1,high);
}
}

void main()
{
int a[10],size,i;
printf("Enter the size of array : ");
scanf("%d",&size);

printf("Enter %d elements in array : ",size);

for(i=0;i<size;i++)
scanf("%d",&a[i]);

printf("Element before sorting : ");

for(i=0;i<size;i++)
printf("%d ",a[i]);

quicksort(a,0,size-1);

printf("Element after sorting : ");

for(i=0;i<size;i++)
printf("%d ",a[i]);

}