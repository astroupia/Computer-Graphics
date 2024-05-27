#include"graphics.h"

void welcomingMessage(int count) {
    count = 0;
    cleardevice();
    while (!kbhit() || count < 200) {
        setcolor(BROWN);
        setfillstyle(2, 6);
        rectangle(100, 50, 450, 400);
        floodfill(101,101, BROWN);
        setcolor(RED);
        outtextxy(140, 70, "Welcome To My Graphics Talent Showcase");
        outtextxy(200, 200, "Nahom Teguade Kassa");
        outtextxy(105, 360, "Current Date: Wed - 5/22/24");
        outtextxy(105, 380, "Current Time: 4:38");
        count++;
    }
}

void lineMotion(int count) {
    count = 0;
    cleardevice();
    while(!kbhit() || count < 600) {
        setcolor(RED);
        line(600-count, 240, 630-count, 240);
        delay(5);
        setcolor(BLACK);
        line(600-count, 240, 630-count, 240);
        count++;
    }
}

void rectangleMotion(int count) {
    count = 0;
    cleardevice();
    while (!kbhit() || count < 600) {
            setcolor(RED);
            setfillstyle(6, 7);
            rectangle(10+count, 450, 30+count, 470);
            floodfill(11+count, 451, RED);
            delay(5);
            setcolor(BLACK);
            setfillstyle(6, BLACK);
            rectangle(10+count, 450, 30+count, 470);
            floodfill(11+count, 451, BLACK);
            count++;
        }
}

void circleMotion(int count) {
    // Circle with Fill Ellipse
    cleardevice();
    count = 0;
    while (!kbhit() || count < 500) {
            setcolor(RED);
            setfillstyle(7, 8);
            fillellipse(550-count, 450-count, 20, 20);
            delay(5);
            setcolor(BLACK);
            setfillstyle(2, BLACK);
            fillellipse(550-count, 450-count, 20, 20);
            count++;
        }
}

int main() {
    int gd = 0, gm;
    initgraph(&gd,&gm,"..\\bgi");
    int count = 0;
    welcomingMessage(count);
    lineMotion(count);
    rectangleMotion(count);
    circleMotion(count);
    return 0;
}
