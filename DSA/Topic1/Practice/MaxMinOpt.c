#include<stdio.h>


int size, i, a[10];

int maxValue()
{
printf("\nIt is a maximum value finding function");

int maximum = a[0];
for(i=0 ; i<size ; i++)
{
if(maximum<a[i])
maximum = a[i];
}
printf("\nThe maximum value is : %d ", maximum);

return maximum;
}


int minValue()
{
printf("\nIt is a mainimum value finding function");

int minimum = a[0];
for(i=0 ; i<size ; i++)
{
if(minimum>a[i])
minimum = a[i];
}
printf("\nThe minimum value is : %d ", minimum);

return minimum;
}

void main()
{

printf("Enter the size of an array : ");
scanf("%d", &size);

printf("Enter %d Elements Of Array : ", size);

for(i=0 ; i<size ; i++)
scanf("%d",&a[i]);

for(i=0 ; i<size ; i++)
printf("%d ", a[i]);

maxValue();
minValue();


}