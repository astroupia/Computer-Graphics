#include <graphics.h>

void drawCircle(int x_center, int y_center, int radius) {
    int x = 0, y = radius;
    int decisionParameter = 1 - radius; // Initial decision parameter

    // Plot the initial point in each octant
    putpixel(x_center + x, y_center + y, WHITE);
    putpixel(x_center - x, y_center + y, WHITE);
    putpixel(x_center + x, y_center - y, WHITE);
    putpixel(x_center - x, y_center - y, WHITE);
    putpixel(x_center + y, y_center + x, WHITE);
    putpixel(x_center - y, y_center + x, WHITE);
    putpixel(x_center + y, y_center - x, WHITE);
    putpixel(x_center - y, y_center - x, WHITE);

    // Iterate until the point on the circle crosses the x=y line
    while (x < y) {
        x++;
        if (decisionParameter < 0) {
            decisionParameter += 2 * x + 1; // Update decision parameter
        } else {
            y--;
            decisionParameter += 2 * (x - y) + 1; // Update decision parameter
        }
        // Plot points symmetrically in each octant
        putpixel(x_center + x, y_center + y, WHITE);
        putpixel(x_center - x, y_center + y, WHITE);
        putpixel(x_center + x, y_center - y, WHITE);
        putpixel(x_center - x, y_center - y, WHITE);
        putpixel(x_center + y, y_center + x, WHITE);
        putpixel(x_center - y, y_center + x, WHITE);
        putpixel(x_center + y, y_center - x, WHITE);
        putpixel(x_center - y, y_center - x, WHITE);
        delay(30);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL); // Initialize graphics mode

    int x_center = 200, y_center = 200, radius = 100;
    drawCircle(x_center, y_center, radius);

    getch();
    closegraph(); // Close graphics mode
    return 0;
}
