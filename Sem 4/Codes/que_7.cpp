/*
    Que : 7| W.A.P. to translate a Triangle about the origin.
*/

#include <graphics.h>
#include <conio.h>

void triangle(int *X, int *Y){
    line(X[0], Y[0], X[1], Y[1]);
    line(X[1], Y[1], 2[X], Y[2]);
    line(X[0], Y[0], X[2], Y[2]);
}

int main(){
    int gd=DETECT, gm;
    char driver[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, driver);
    
    setbkcolor(WHITE);
    cleardevice();
    setcolor(0);

    line(50,40, 50, 350);
    line(30, 330, 500, 330);

    int triangleX[] = {140,80,200};
    int triangleY[] = {60,160,160};

    triangle( triangleX, triangleY ); // Before Translation.


    int transVectorX[] = {140,140,140};
    int transVectorY[] = {120,120,120};

    for (int i=0; i<3; i++){
        triangleX[i] += transVectorX[i];
        triangleY[i] += transVectorY[i];
    }


    triangle( triangleX, triangleY ); // After Translation.






    getch();
    closegraph();
}
