/*
    Que : 8| W.A.P. to Draw a moving car using C.
*/

#include <graphics.h>
#include <stdio.h>

void car(int offset){

    int i=offset;

    circle(65 + i, 330, 15);
    arc(65+i, 330, 0 ,180, 20);

    circle(165 + i, 330, 15);
    arc(165+i, 330, 0 ,180, 20);
    
    line(20 + i, 330, 45 + i, 330);
    line(20 + i, 330, 20+i, 295);
    line(20+i, 295, 25+i, 300);
    line(25+i, 300, 40+i, 300);
    
    arc(i+110,370, 45, 135, 100);
    line(180 + i, 300, 212 + i, 300);

    line(85 + i, 330, 145 + i, 330);
    
    line(232 + i, 330, 185 + i, 330);
    
	arc(i+184, 340, 11,54, 50);

    line(95+i, 305, 218+i, 305);
    arc(110+i, 258, 210, 252, 50);
}


int main()
{
    int gd=DETECT, gm;
    char driver[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, driver);

    setbkcolor(WHITE);
    cleardevice();
    setcolor(0);

    // car(300);

	for (int i=0; i<800; i+=5){
		car(i%400);
		delay(50);
		cleardevice();
	}

    getch();
	closegraph();
}