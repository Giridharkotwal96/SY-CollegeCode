#include<stdio.h>

int main()
{

int size, i, a[10], search, count;
int flag = 0;

printf("\nEnter the size of an array : ");
scanf("%d", &size);

printf("\nEnter %d Elements of array : ", size);

for(i=0 ; i<size ; i++)
{
scanf("%d", &a[i]);
}

printf("\nEnter the searching element : ");
scanf("%d", &search);
for(i=0 ; i<size ; i++)
{
if(search == a[i])
{
flag = 1 ;
count += 1 ;
}
}
if(flag == 1)
{
printf("\nThe element is found at %d index ", i);
}
else{
printf("\nThe element is not found");
}
printf("\nThe number of occurance : %d ",count);
return 0;
}


