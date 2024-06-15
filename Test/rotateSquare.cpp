#include <graphics.h>
#include <math.h>

// Convert degrees to radians
double toRadians(double degree) {
    return degree * (M_PI / 180.0);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Center of the square
    int xc = getmaxx() / 2;
    int yc = getmaxy() / 2;

    // Side length of the square
    int s = 100;

    // Rotation angle in degrees
    double theta = 45.0;
    double rad = toRadians(theta);

    // Original coordinates of the square corners
    int x1 = xc - s / 2, y1 = yc - s / 2;
    int x2 = xc + s / 2, y2 = yc - s / 2;
    int x3 = xc + s / 2, y3 = yc + s / 2;
    int x4 = xc - s / 2, y4 = yc + s / 2;

    // Calculate new coordinates after rotation
    int nx1 = xc + (x1 - xc) * cos(rad) - (y1 - yc) * sin(rad);
    int ny1 = yc + (x1 - xc) * sin(rad) + (y1 - yc) * cos(rad);

    int nx2 = xc + (x2 - xc) * cos(rad) - (y2 - yc) * sin(rad);
    int ny2 = yc + (x2 - xc) * sin(rad) + (y2 - yc) * cos(rad);

    int nx3 = xc + (x3 - xc) * cos(rad) - (y3 - yc) * sin(rad);
    int ny3 = yc + (x3 - xc) * sin(rad) + (y3 - yc) * cos(rad);

    int nx4 = xc + (x4 - xc) * cos(rad) - (y4 - yc) * sin(rad);
    int ny4 = yc + (x4 - xc) * sin(rad) + (y4 - yc) * cos(rad);

    // Draw the original square
    setcolor(WHITE);
    rectangle(20, 20, 20, 40);

    // Draw the rotated square
    setcolor(RED);
    line(nx1, ny1, nx2, ny2);
    line(nx2, ny2, nx3, ny3);
    line(nx3, ny3, nx4, ny4);
    line(nx4, ny4, nx1, ny1);

    // Wait for a key press
    getch();

    // Close the graphics mode
    closegraph();
    return 0;
}
