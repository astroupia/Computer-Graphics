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
    setfillstyle(7, 14);
    setcolor(4);
    fillellipse(100, 100, 80, 50);
    ellipse(300, 100, 10, 80, 80, 50);
    setfillstyle(5, 3);
    sector(500, 100, 10, 80, 80, 50);
    getch();
    closegraph();
    return 0;
}
