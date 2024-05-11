#include <graphics.h>


int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL); // Initialize graphics mode
    int count = 0;
    int radius = 5;
    while (!kbhit()) {
        if (count == 240 ) {
            count = 0;
            cleardevice();
        }
        setcolor(rand()%16);
        arc(340, 240, 0, 180, 5 + count);
        delay(20);
        count += 5;
    }
    getch();
    closegraph(); // Close graphics mode
    return 0;
}
