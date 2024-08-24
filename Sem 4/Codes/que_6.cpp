/*
    Que : 6| W.A.P. to draw a Line, Circle, Ellipse, Rectangle using built-in functions using C.
*/

#include <graphics.h>
#include <conio.h>

int main(){

    int gd=DETECT, gm;
    char driver[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, driver);

    setbkcolor(WHITE);
    cleardevice();

    setcolor(3);
    line(100,300,400,200);

    setcolor(6);
    circle(300,200,100);

    setcolor(9);
    ellipse(300,200, 0, 360, 200, 140);

    setcolor(5);
    rectangle(50,30,550,380);
   
    getch();
    closegraph();
}