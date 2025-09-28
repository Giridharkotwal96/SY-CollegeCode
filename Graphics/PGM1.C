#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int gd, gm;

gd = DETECT;
initgraph(&gd, &gm, "C:\\TC\\BGI");
setcolor(YELLOW);

line(100, 200, 50, 60);

getch();
closegraph();

}