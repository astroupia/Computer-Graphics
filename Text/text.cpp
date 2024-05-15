#include <iostream>
#include <graphics.h>
#include <stdlib.h>
#include <dos.h>
#include <conio.h>
using namespace std;

int gd = 0, gm;
int main() {
    initgraph(&gd, &gm, "..\bgi");
    settextstyle(2, 0, 6);
    outtextxy(100, 100, "Arsema");
    getch();
    closegraph();
    return 0;
}
