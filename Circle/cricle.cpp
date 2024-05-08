#include <iostream>
#include <graphics.h>
#include <stdlib.h>
#include <dos.h>
#include <conio.h>
using namespace std;

int gd = 0, gm;
int main() {
    initgraph(&gd, &gm, "..\bgi");
    initwindow(700,700);
    int i = 0;
    int lineY = 0;
    while (!kbhit()) {
        setcolor(2);
        //setlinestyle(0, 0, 3);
        setfillstyle(3, 2);
        rectangle(10+i, 10, 40+i, 50);
        floodfill(15+i, 15, 2);
        delay(10);
        setcolor(0);
        //setlinestyle(0, 0, 3);
        setfillstyle(3, 0);
        rectangle(10+i, 10, 40+i, 50);
        floodfill(15+i, 15, 0);
        i++;

    }
    getch();
    closegraph();
    return 0;
}
