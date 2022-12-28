
#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
int gd = DETECT,gm,xc,yc;
float r,x,y,p;
initgraph(&gd, &gm, "C:\\turboc3\\bgi");
printf("enter the radius:  ");
scanf("%f",&r);
printf("enter the center of the circle (x,y)  ");
scanf("%d%d",&xc,&yc);
x=0,y=r;
p=1-r;
while(x<=y)
{
	putpixel(xc+x, yc-y, WHITE);
	putpixel(xc+y, yc-x, WHITE);
	putpixel(xc+y, yc+x, WHITE);
	putpixel(xc+x, yc+y, WHITE);
	putpixel(xc-x, yc+y, WHITE);
	putpixel(xc-y, yc+x, WHITE);
	putpixel(xc-y, yc-x, WHITE);
	putpixel(xc-x, yc-y, WHITE);

	if(p<0)
	{
		p=p+(2*x)+1;
		x=x+1;
		y=y;
	}

	else
	{
		p=p+(2*x)+1-(2*y);
		x=x+1;
		y=y-1;

	}
}
getch();
closegraph();
return 0;
}