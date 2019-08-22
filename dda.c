#include<stdio.h>
#include<graphics.h>
int abs (int n) 
{ 
    return ( (n>0) ? n : ( n * (-1))); 
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
        delay(10);          // for visualization of line- 
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
     dda(5, 100, 100, 100,10); 
     dda(50, 100, 50, 200,11); 
      dda(5, 200, 100, 200,14);
       dda(201, 100, 201, 200,14);
       
     
    return 0; 
}
