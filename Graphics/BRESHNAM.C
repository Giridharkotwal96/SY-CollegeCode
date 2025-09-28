#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
int r, x, y, d, xc, yc;

dx
int i, gd, gm;
gd=DETECT;
clrscr();
initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
cleardevice();
printf("\nEnter value of (xc, yc): ");
scanf("%d%d",&xc,&yc);
printf("\nEnter the radius of circle: ");
scanf("%d",&r);
x=0;
y=r;
putpixel(x,y,RED);
d=3-(2*r);
for(x=0;x<=y;x++)
{
if(d<0)
{
y=y;
d=d+(4*x)+6;
}
else{
y=y-1;
d=d+4*(x-y)+10;
}
}
putpixel(xc+x,yc-y,1);
putpixel(xc-x,yc-y,2);
putpixel(xc+x,yc+y,3);
putpixel(xc-x,yc+y,4);        //use ctrl+fn+E for copy
putpixel(xc+y,yc-x,5);        //use shift+fn+E for paste
putpixel(xc-y,yc-x,6);
putpixel(xc+y,yc+x,7);
putpixel(xc-y,yc+x,8);

getch();
closegraph();
}