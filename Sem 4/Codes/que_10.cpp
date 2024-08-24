/*
    Que : 10| W.A.P. to draw given image.
*/

#include <graphics.h>
#include <conio.h>

int main(){
    int gd=DETECT, gm;
    char driver[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, driver);
    
    setbkcolor(WHITE);
    cleardevice();
    setcolor(0);
    setfillstyle(SOLID_FILL,0);

    int thickness = 7;

    int r1 = 90, r2 = 60, r3 = 30, r4 = 4 ;

    circle(300,250, r1-thickness/2);
    circle(300,250, r1+thickness/2);
    floodfill(300-r1,250, 0);
    
    circle(300,250, r2-thickness/2);
    circle(300,250, r2+thickness/2);
    floodfill(300-r2,250, 0);
    
    circle(300,250, r3-thickness/2);
    circle(300,250, r3+thickness/2);
    floodfill(300-r3,250, 0);

    // circle(300,250, r4-thickness/2);
    circle(300,250, r4+thickness/2);
    floodfill(300-r4,250, 0);

    
    getch();
    closegraph();
}