/*
    Que : 1| W.A.P. to draw a line using simple DDA algorithm using C.
*/

#include <graphics.h>
#include <conio.h>

int sign(const int &v){
    if(v==0)    return 0;
    if(v>1)    return 1;
    return -1;
}

void Line(int &x1, int &y1, int &x2, int &y2){

    int dx = (x2-x1), dy = (y2-y1);

    int length = abs(dx)>abs(dy) ? abs(dx):abs(dy);

    float Dx = (float)dx/length;
    float Dy = (float)dy/length;
    
    float x = x1 + 0.5*sign(dx), 
          y = y1 + 0.5*sign(dy);
    int i=1;

    while(i<=length){
        putpixel((int)x, (int)y, BLACK);
        x+=Dx;
        y+=Dy;
        i++;
    }
}


int main(){

    int gd=DETECT, gm;
    char driver[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, driver);

    setbkcolor(WHITE);
    cleardevice();

    int x1 = 150 , y1 = 150,  x2 = 460, y2 = 250;
    Line(x1, y1, x2, y2);

    getch();
    closegraph();
}