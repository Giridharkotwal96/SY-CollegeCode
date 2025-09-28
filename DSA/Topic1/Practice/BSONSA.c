// In this file i done the brinary search in non sorted array 

#include<stdio.h>

int i,size,j,temp,a[100];

void merge(int beg,int mid,int end)
{
int j,k;
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
int a[10],size,i;
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

void sortedlist()
{
printf("\nThe element after sorting : ");

for(i=0 ; i<size ; i++)
{
printf(" %d ",a[i]);
}
}

void bubblesort()
{
// code block for sorting a array by bubble sort

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
sortedlist();
}


void insertionsort()
{

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
sortedlist();
}

void selectionsort()
{
// code block for SelectionSort

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
sortedlist();
}


void main()
{

int choice;
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

do{
printf("\n\t1)Perform sorting by BubbleSort\n\t2)Perform sorting by InsertionSort\n\t3)Perform sorting by SelectionSort\n\t4)Perform sorting by MergeSort  ");

printf("\nSelect by which method would you like to do sorting : ");
scanf("%d",&choice);
switch(choice)
{
case 1 : bubblesort();
break;

case 2 : insertionsort();
break;

case 3 : selectionsort();
break;

case 4 : divide(0,size-1);
sortedlist();
break;

case 5 : printf("choice is not present");
break;
}
}while(choice != 5);
}