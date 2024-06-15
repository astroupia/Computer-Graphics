#include <graphics.h>
#include <conio.h>
using namespace std;

void bounceBalls() {
    int x1 = getmaxx() / 4, y1 = 0;
    int x2 = 3 * getmaxx() / 4, y2 = 0;
    int dy1 = 5, dy2 = 3;
    int radius = 20;

    while (!kbhit()) {
        setfillstyle(SOLID_FILL, WHITE);
        fillellipse(x1, y1, radius, radius);
        fillellipse(x2, y2, radius, radius);
        delay(50);
        setfillstyle(SOLID_FILL, BLACK);
        fillellipse(x1, y1, radius, radius);
        fillellipse(x2, y2, radius, radius);

        y1 += dy1;
        y2 += dy2;
        if (y1 < 0 || y1 + radius > getmaxy()) {
            dy1 = -dy1;
        }
        if (y2 < 0 || y2 + radius > getmaxy()) {
            dy2 = -dy2;
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    bounceBalls();

    getch();
    closegraph();
    return 0;
}
