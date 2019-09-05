#include<stdio.h>
#include<graphics.h>
int abs (int n) 
{ 
    return ( (n>0) ? n : ( n * (-1))); 
} 


void drawcircle(int x0, int y0, int radius,int co)
{
    int x = radius;
    int y = 0;
    int err = 0;

    while (x >= y)
    {
    

	 for(int i=x0;i<=x0+x;i++){
	putpixel(i, y0 + y, co);
	 delay(1);
	}

	for(int i=x0;i<=x0+y;i++){
	putpixel(i, y0 + x, co);
	 delay(1);
  }

  for(int i=x0;i<=x0+x;i++){
	putpixel(i, y0 - y, co);
	 delay(1);
   }

   for(int i=x0;i<=x0+y;i++){
	putpixel(i, y0 - x, co); delay(1);}
 

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

void dda(int x1,int y1,int x2,int y2,int m)
{
     int dx=abs(x2-x1);
     int dy = abs(y2-y1);
     int steps = (dx>dy)?dx:dy;
     float Xinc = dx / (float) steps; 
      float Yinc = dy / (float) steps; 
       float X = x1; 
    float Y = y1; 
    for (int i = 0; i <= steps; i++) 
    { 
        putpixel (X,Y,m);  // put pixel at (X,Y) 
        X += Xinc;           // increment in x at each step 
        Y += Yinc;           // increment in y at each step 
        delay(5);          // for visualization of line- 
                             // generation step by step 
    } 
}
int main()
{
    int gd = DETECT, gm; 
  
    // Initialize graphics function 
    initgraph (&gd, &gm, "");    
  
    int X0 = 2, Y0 = 2, X1 = 1000, Y1 = 1000; 
    //dda(2, 2, 100, 100); 
     dda(100, 105, 100, 200,10); 
     dda(110, 105, 110, 200,11); 
     for(int k=100;k<=110;k++)
        for(int l=105;l<=200;l++)
         putpixel(k,l,15);
         
         dda(105, 150, 130, 150,10); 
     dda(105, 145, 130, 145,11); 
     for(int k=105;k<=130;k++)
        for(int l=145;l<=150;l++)
         putpixel(k,l,15);
         
         dda(130, 105, 130, 200,10); 
     dda(140, 105, 140, 200,11); 
     for(int k=130;k<=140;k++)
        for(int l=105;l<=200;l++)
         putpixel(k,l,15);
         
         dda(150, 110, 200, 110,10); 
     dda(150, 105, 150, 105,11); 
     for(int k=150;k<=200;k++)
        for(int l=105;l<=110;l++)
         putpixel(k,l,15);
         
          dda(170, 105, 170, 200,10); 
     dda(180, 105, 180, 200,11); 
     for(int k=170;k<=180;k++)
        for(int l=105;l<=200;l++)
         putpixel(k,l,15);
         
       /*   dda(210, 5, 210, 100,10); 
     dda(220, 5, 220, 100,11); 
     for(int k=210;k<=220;k++)
        for(int l=5;l<=100;l++)
         putpixel(k,l,15);*/
           drawcircle(210,150,45,15); 
         drawcircle(215,155,35,0);
      
         
         
       
     
    return 0; 
}
