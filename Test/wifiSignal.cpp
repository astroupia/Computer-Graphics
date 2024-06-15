#include <graphics.h>
#include <conio.h>
using namespace std;

void displayWiFiSignal(bool strongSignal) {
    int x = getmaxx() / 2;
    int y = getmaxy() / 2;
    int radius = 20;
    int color = strongSignal ? BROWN : LIGHTGRAY;

    setcolor(color);
    arc(x, y, 45, 90, radius);
    arc(x, y, 45, 90, radius + 20);
    arc(x, y, 45, 90, radius + 40);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    bool strongSignal = true;
    while (!kbhit()) {
        displayWiFiSignal(strongSignal);
        delay(1000);
        strongSignal = !strongSignal;
        cleardevice();
    }
    getch();
    closegraph();
    return 0;
}
