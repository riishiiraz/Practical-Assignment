/*
    Que : 4| W.A.P. to draw a circle using mid point circle algorithm using C. 
*/

#include <graphics.h>
#include <conio.h>

void Circle(int r, int h, int k){

    int x = r, y = 0;
    int P = 1 - r;

     while (x > y)
     { 
        y++;
        if (P <= 0)
            P = P + 2*y + 1;

        else
        {
            x--;
            P = P + 2*y - 2*x + 1;
        }

        if (x < y)
            break;

        int clr = 3;

        putpixel(h+x, k+y, clr);
        putpixel(h-x, k+y, clr);
        putpixel(h+x, k-y, clr);
        putpixel(h-x, k-y, clr);

        putpixel(h+y, k+x, clr);
        putpixel(h-y, k+x, clr);
        putpixel(h+y, k-x, clr);
        putpixel(h-y, k-x, clr);

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