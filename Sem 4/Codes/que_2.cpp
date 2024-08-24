/*
    Que : 2| W.A.P. to draw a line using Bresenham’s Line algorithm using C.
*/

#include <graphics.h>
#include <conio.h>

void Line(int &x1, int &y1, int &x2, int y2){

    int dx = (x2-x1), dy = (y2-y1);
    
    int x = x1, y = y1;

    int e = 2*dy-dx;

    for (int i=1; i<=dx; i++){
        putpixel(x,y, BLACK);
        while(e>=0){
            y++;
            e = e-(2*dx);
        }
        x++;
        e=e+(2*dy);
    }
}

int main(){
    int gd=DETECT, gm;
    char driver[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, driver);

    setbkcolor(WHITE);
    cleardevice();

    int x1 = 150 , y1 = 150,  x2 = 450, y2 = 270;
    Line(x1, y1, x2, y2);

    getch();
    closegraph();
}