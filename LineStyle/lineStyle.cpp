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
    int count = 0;
    int lineY = 0;
    while (!kbhit()) {
        setcolor(count%16);
        setlinestyle(count%5, 0, count%4);
        line(20, 20+lineY, 200, 20+lineY);
        delay(1000);
        count++;
        lineY+=10;
    }
    getch();
    closegraph();
    return 0;
}
