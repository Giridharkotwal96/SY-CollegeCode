#include<stdio.h>
void main()
{

int sorted,  size, i, j, a[10];

printf("Enter the size of array : ");
scanf("%d",&size);

printf("Enter %d elements in array : ",size);

for(i=0 ; i<size ; i++)
scanf("%d", &a[i]);

for(i=0 ; i<size ; i++)
printf("%d ", a[i]);


for(i=1 ; i<size ; i++)
{
sorted = a[i];
for(j=i-1 ; j>=0 && sorted < a[j]; j--)
{
a[j+1] = a[j];
}
a[j+1] = sorted;
}

printf("\nThe elements after sorting becomes\n");

for(i=0 ; i<size; i++)
printf("%d ", a[i]);
}