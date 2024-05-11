#include <graphics.h>


int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL); // Initialize graphics mode
    int count = 0;
    while (!kbhit()) {
        if (count == 640) {
            count = 0;
        }
        setcolor(RED);

        setfillstyle(2, 3);
        circle(100+count, 100, 50);
        floodfill(100+count,100, 4);

        setfillstyle(4, 5);
        circle(100+count, 100+count, 50);
        floodfill(100+count,100+count, 4);

        setfillstyle(6, 7);
        circle(100, 100+count, 50);
        floodfill(100,100+count, 4);

        delay(10);
        setcolor(BLACK);
        circle(100+count, 100, 50);
        circle(100+count, 100+count, 50);
        circle(100, 100+count, 50);
        count++;
    }
    getch();
    closegraph(); // Close graphics mode
    return 0;
}
