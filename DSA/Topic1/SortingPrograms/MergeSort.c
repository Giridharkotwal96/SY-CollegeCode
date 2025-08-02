#include<stdio.h>
int size, a[10];
void merge(int beg,int mid,int end)
{
int i,j,k;
int temp[10];
i=beg;
j=mid+1;
k=beg;
while(i<=mid&&j<=end)
{
if(a[i]<a[j])
{
temp[k]=a[i];
i++;
k++;
}
else
{
temp[k]=a[j];
j++;
k++;
}
} 
while(i<=mid)
{
temp[k]=a[i];
i++;
k++;
}
while(j<=end){
temp[k]=a[j];
j++;
k++;
}
for(i=beg;i<=end;i++)
a[i]=temp[i];
}
void divide(int beg,int end)
{
int mid;
if(beg!=end)
{
mid=(beg+end)/2;
divide(beg,mid); // Recurssive calling
divide(mid+1,end);
merge(beg,mid,end); 
}
}
void main()
{
int i;
printf("\nEnter the size of an array : ");
scanf("%d",&size);
printf("\nEnter %d elements in array : ",size);
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("\nThe element before sorting : ");
for(i=0;i<size;i++)
{
printf(" %d ",a[i]);
}
divide(0,size-1);
printf("\nThe element after sorting : ");

for(i=0;i<size;i++)
{
printf(" %d ",a[i]);
}
}