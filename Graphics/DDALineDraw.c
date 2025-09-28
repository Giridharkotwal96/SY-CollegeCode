#include<stdio.h>
#include<conio.h>  
#include<graphics.h>
#include<math.h>

int main()
{
int gd, gm;
float x1, x2, y1, y2, length, x, y, i ;
float dx, dy;

gd = DETECT;

initgraph(&gd, &gm, "");

printf("Enter the 1st Co-ordinate : ");
scanf("%d %d" , &x1, &y1);

printf("Enter the 2nd Co-ordinate : ");
scanf("%d%d", &x2, &y2);

dx = (x2-x1);
dy = (y2-y1);

if(dx>=dy)
length = dx;
else
length = dy;

dx = (x2-x1)/length ;
dy = (y2-y1)/length ;

x = x1 + 0.5;
y = y1 + 0.5;

i = 1;
while(i<=length)
{
putpixel(x, y,WHITE);
x = x + dx;
y = y + dy;

i = i+1;
}
printf("Graph is over");
getch();
return 0;
}