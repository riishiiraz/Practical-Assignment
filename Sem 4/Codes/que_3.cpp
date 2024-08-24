/*
    Que : 3| W.A.P. to draw a circle using Bresenham’s Circle algorithm using C. 
*/

#include <graphics.h>
#include <conio.h>

void Circle(int r, int h, int k){
    int x = 0, y = r;
    int d = 3 - 2*r;

    putpixel(x,y, BLACK);

    while( y >= x ){
        if(d>0){
            y--;
            d = d+4*(x-y)+10;
        }
        else
            d = d + 4 * x + 6;
        x++;

        putpixel(h+x, k+y, BLACK);
        putpixel(h-x, k+y, BLACK);
        putpixel(h+x, k-y, BLACK);
        putpixel(h-x, k-y, BLACK);
        
        putpixel(h+y, k+x, BLACK);
        putpixel(h-y, k+x, BLACK);
        putpixel(h+y, k-x, BLACK);
        putpixel(h-y, k-x, BLACK);
    }

}

int main(){

    int gd=DETECT, gm;
    char driver[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, driver);

    setbkcolor(WHITE);
    cleardevice();

    Circle(84, 300,250);
   
    getch();
    closegraph();
}