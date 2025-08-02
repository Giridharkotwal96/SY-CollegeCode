#include<stdio.h>

int main()
{

int size, i, a[10];

printf("\nEnter the size of an array : ");
scanf("%d", &size);

printf("\nEnter %d Elements of array : ", size);

for(i=0 ; i<size ; i++)
{
scanf("%d", &a[i]);
}
//printf("The elements of array are ", a[i]);

return 0;
}
