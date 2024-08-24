/*
    Que : 9| W.A.P. to draw given image.
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

    int thickness = 6;
    int size = 85;

    circle(300,250,size-(thickness/2));
    // circle(300,250,95);
    circle(300,250,size+(thickness/2));
    setfillstyle(SOLID_FILL,0); // Filling The circumference.
    floodfill(300-size,250, 0);



    setfillstyle(SOLID_FILL,YELLOW); // Filling The CIRCLE
    floodfill(300,250, 0);

    int eyeSeparation = 30;


    ellipse( 300-eyeSeparation, 220, 0, 360, 6, 10 );
    ellipse( 300+eyeSeparation, 220, 0, 360, 6, 10 );
    setfillstyle(SOLID_FILL,BLACK);
    floodfill(300-eyeSeparation,220, 0);
    floodfill(300+eyeSeparation,220, 0);

    int smile = 45;

    arc(300,250-5,270-smile ,270+smile, 50);
    arc(300,251-5,270-smile ,270+smile, 50);
    arc(300,249-5,270-smile ,270+smile, 50);
    
    getch();
    closegraph();
}
