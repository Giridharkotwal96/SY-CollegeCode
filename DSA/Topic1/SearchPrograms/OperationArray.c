#include<stdio.h>

int size, i, a[10], minimum ;

int max_value()
{
printf("\nMaximum Value finding function ");
int maximum = a[0];
for(i=0 ; i<size ; i++)
{
if(maximum<a[i])
maximum = a[i];
}
printf("\nThe highest element is : %d ", maximum);

return maximum;
}

int min_value()
{
printf("\nMinimum Value finding function ");
int minimum = a[0];
for(i=0 ; i<size ; i++)
{
if(minimum>a[i])
minimum = a[i];
}
printf("\nThe lowest element is : %d ", minimum);

return minimum;
}


int main()
{

printf("\nEnter the size of an array : ");
scanf("%d", &size);

printf("\nEnter %d Elements of array : ", size);

for(i=0 ; i<size ; i++)
{
scanf("%d", &a[i]);
}

int num1 = max_value();
int num2 = min_value();

int sum = num1 + num2 ;
printf("\nAddition of maximum and minimum number is : ",sum);
}