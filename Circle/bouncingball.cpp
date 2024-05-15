#include <graphics.h>


int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL); // Initialize graphics mode
    int count = 0;
    setcolor(8);
    setlinestyle(0,0,3);
    line(100, 350, 500, 350);
    while (!kbhit()) {
        while (count < 195) {
          setcolor(RED);
        setfillstyle(1, 14);
        fillellipse(300, 100+count, 50, 50);

        delay(10);
        setcolor(BLACK);
        setfillstyle(1, 0);
        fillellipse(300, 100+count, 50, 50);
        count++;
        }

        while (count > 0) {
            setcolor(RED);
            setfillstyle(1, 14);
            fillellipse(300, 100+count, 50, 50);

            delay(10);
            setcolor(BLACK);
            setfillstyle(1, 0);
            fillellipse(300, 100+count, 50, 50);
            count--;
        }
    }
    getch();
    closegraph(); // Close graphics mode
    return 0;
}
