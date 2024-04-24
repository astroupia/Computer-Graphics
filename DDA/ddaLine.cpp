#include <graphics.h>
#include <conio.h>
#include <math.h>

void drawLineDDA(int x0, int y0, int x1, int y1) {
    int dx = x1 - x0;
    int dy = y1 - y0;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float Xinc = dx / (float) steps;
    float Yinc = dy / (float) steps;

    float x = x0;
    float y = y0;
    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE); // Draw pixel at (round(x), round(y)) with white color
        x += Xinc;
        y += Yinc;
        delay(20); // For visualization, delay can be adjusted or removed
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI"); // Adjust the path according to your Turbo C++ BGI location

    int x0 = 100, y0 = 100, x1 = 500, y1 = 300;
    drawLineDDA(x0, y0, x1, y1);

    getch();
    closegraph();
    return 0;
}
