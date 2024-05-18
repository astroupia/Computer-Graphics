#include <iostream>
#include <graphics.h>
#include <stdlib.h>
#include <dos.h>
#include <conio.h>
#include <cmath>
using namespace std;

int gd = 0, gm;
int main() {
    initgraph(&gd, &gm, "..\bgi");
    settextstyle(3, 0, 0);
    outtextxy(150, 50, "Nahom Teguade");
    line(100, 100, 540, 100);
    double alpha;
    double rad = 22 / (7 * 180.0);
    int count = 0;
    while (!kbhit()) {
            for (alpha = 40; alpha <= 140; alpha++){
                setcolor(YELLOW);
                line(320, 100, 320+(150*cos(alpha * rad)), 200+(150 * sin(alpha * rad)));
                setfillstyle(7, 3);
                circle(320+(150*cos(alpha * rad)), 200+(150 * sin(alpha * rad)), 30);
                floodfill(320+(150*cos(alpha * rad))+5, 200+(150 * sin(alpha * rad))+5, 14);
                delay(10);
                setcolor(0);
                setfillstyle(0, 0);
                line(320, 100, 320+(150*cos(alpha * rad)), 200+(150 * sin(alpha * rad)));
                circle(320+(150*cos(alpha * rad)), 200+(150 * sin(alpha * rad)), 30);
                floodfill(320+(150*cos(alpha * rad))+5, 200+(150 * sin(alpha * rad))+5, 0);
                count++;
            }
            for (alpha = 140; alpha >= 40; alpha--){
                setcolor(YELLOW);
                line(320, 100, 320+(150*cos(alpha * rad)), 200+(150 * sin(alpha * rad)));
                setfillstyle(7, 3);
                circle(320+(150*cos(alpha * rad)), 200+(150 * sin(alpha * rad)), 30);
                floodfill(320+(150*cos(alpha * rad))+5, 200+(150 * sin(alpha * rad))+5, 14);
                delay(10);
                setcolor(0);
                setfillstyle(0, 0);
                line(320, 100, 320+(150*cos(alpha * rad)), 200+(150 * sin(alpha * rad)));
                circle(320+(150*cos(alpha * rad)), 200+(150 * sin(alpha * rad)), 30);
                floodfill(320+(150*cos(alpha * rad))+5, 200+(150 * sin(alpha * rad))+5, 0);
                count++;
            }
    }
    getch();
    closegraph();
    return 0;
}
