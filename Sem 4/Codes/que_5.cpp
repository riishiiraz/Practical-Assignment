/*
    Que : 5| W.A.P. for line clipping using cohen-sutherland algorithm using C.
*/

#include <graphics.h>
#include <conio.h>

const int INSIDE = 0;

const int LEFT = 1;
const int RIGHT = 2;
const int BOTTOM = 4;
const int TOP = 8;

typedef struct window
{
    int x_min;
    int y_min;
    int x_max;
    int y_max;
} window;

typedef struct line_
{
    int x1;
    int y1;
    int x2;
    int y2;
} line_;

int getRegionCode(const int &x, const int &y,
 const window &w)
{

    int code = INSIDE;

    if (x < w.x_min)
        code |= LEFT;

    else if (x > w.x_max)
        code |= RIGHT;

    if (y < w.y_min)
        code |= BOTTOM;

    else if (y > w.y_max)
        code |= TOP;

    return code;
}

void Clip(const window &w, line_ &l)
{
    int codeStart = getRegionCode(l.x1, l.y1, w);
    int codeEnd = getRegionCode(l.x2, l.y2, w);

    while (1)
    {
        if (codeStart == 0 && codeEnd == 0)
        {
            return;
        }
        else if (codeStart & codeEnd)
        {
            return;
        }

        int x, y;
        int codeOut = codeStart==0 ? codeEnd : codeStart;

        if (codeOut & TOP)
        {
            x = l.x1 + (l.x2 - l.x1) * (w.y_max - l.y1) / (l.y2 - l.y1);
            y = w.y_max;
        }

        else if (codeOut & BOTTOM)
        {
            x = l.x1 + (l.x2 - l.x1) * (w.y_min - l.y1) / (l.y2 - l.y1);
            y = w.y_min;
        }
        else if (codeOut & RIGHT)
        {
            y = l.y1 + (l.y2 - l.y1) * (w.x_max - l.x1) / (l.x2 - l.x1);
            x = w.x_max;
        }
        else if (codeOut & LEFT)
        {
            y = l.y1 + (l.y2 - l.y1) * (w.x_min - l.x1) / (l.x2 - l.x1);
            x = w.x_min;
        }

        if (codeOut == codeStart)
        {
            l.x1 = x;
            l.y1 = y;
            codeStart = getRegionCode(l.x1, l.y1, w);
        }
        else
        {
            l.x2 = x;
            l.y2 = y;
            codeEnd = getRegionCode(l.x2, l.y2, w);
        }
    }
}

int main()
{

    int gd = DETECT, gm;
    char driver[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, driver);

    setbkcolor(WHITE);
    setcolor(BLACK);
    cleardevice();

    window w{100, 125, 500, 375};
    rectangle(w.x_min, w.y_max, w.x_max, w.y_min);

    line_ ln{30, 300, 380, 80};
    // line(ln.x1, ln.y1, ln.x2, ln.y2);

    Clip(w, ln);

    line(ln.x1, ln.y1, ln.x2, ln.y2);

    getch();
    closegraph();
}