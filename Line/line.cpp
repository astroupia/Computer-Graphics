#include <iostream>
#include <graphics.h>
#include <stdlib.h>
#include <dos.h>
#include <conio.h>
#define keyup 72
#define keyleft 72
#define keydown 75
#define keyright 77
#define keyenter 13
#define keyspace 32
#define keyesc 27
#define bacspace 08

int gd = 0, gm;
using namespace std;

int main() {
    initgraph(&gd, &gm, "..\bgi");
    int increment = 0;
    initwindow(900, 800);

    increment = 0;
    while (!kbhit()) {
        setcolor(RED);
        moveto(50+increment, 50);
        lineto(10+increment, 50);
        delay(1);
        setcolor(BLACK);
        moveto(50+increment, 50);
        lineto(10+increment, 50);
        increment++;
        putpixel(rand()%640, rand()%420, GREEN);
    }
    getch();
    return 0;
}
