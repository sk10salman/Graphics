#include<iostream>
#include<graphics.h>
using namespace std;

void drawcircle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 0;
    int err = 0;

    while (x >= y)
    {
    for(int i=x0-x;i<=x0+x;i++){
	putpixel(i, y0 + y, 15);
	}

	for(int i=x0-y;i<=x0+y;i++){
	putpixel(i, y0 + x, 15);
  }

  for(int i=x0-x;i<=x0+x;i++){
	putpixel(i, y0 - y, 15);
   }

   for(int i=x0-y;i<=x0+y;i++){
	putpixel(i, y0 - x, 15);}

	if (err <= 0)
	{
	    y += 1;
	    err += 2*y + 1;
	}

	if (err > 0)
	{
	    x -= 1;
	    err -= 2*x + 1;
	}
    }
}

int main()
{
    int  x, y, r;
    cout<<"Enter radius of circle: ";
	cin>>r;

	cout<<"Enter co-ordinates of center(x and y): ";
	cin>>x>>y;
	int gd=DETECT, gm, error;
	initgraph(&gd, &gm, "");


	drawcircle(x, y, r);
    getch();
    closegraph();
	return 0;
}
