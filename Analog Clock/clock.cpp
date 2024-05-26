#include <graphics.h>
#include <time.h>
#include <math.h>

#define PI 3.14159265

void drawClockFace(int centerX, int centerY, int radius) {
    setcolor(WHITE);
    circle(centerX, centerY, radius);

    for (int i = 1; i <= 12; i++) {
        int angle = (i * 30 - 90) * PI / 180;

        // Position for the hour mark lines
        int x = centerX + (radius - 20) * cos(angle);
        int y = centerY + (radius - 20) * sin(angle);
        int tx = centerX + radius * cos(angle);
        int ty = centerY + radius * sin(angle);
        line(x, y, tx, ty);

        // Position for the hour numbers
        int textX = centerX + (radius + 20) * cos(angle) - 10;
        int textY = centerY + (radius + 20) * sin(angle) - 10;

        // Convert the hour number to string
        char numStr[3];
        sprintf(numStr, "%d", i);

        outtextxy(textX, textY, numStr);
    }
}

void drawHand(int centerX, int centerY, int length, float angle, int color) {
    int x = centerX + length * cos(angle * PI / 180);
    int y = centerY + length * sin(angle * PI / 180);
    setcolor(color);
    line(centerX, centerY, x, y);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    int centerX = getmaxx() / 2;
    int centerY = getmaxy() / 2;
    int radius = 200;

    while (!kbhit()) {
        cleardevice();
        drawClockFace(centerX, centerY, radius);

        time_t now = time(0);
        struct tm *local = localtime(&now);

        int hours = local->tm_hour;
        int minutes = local->tm_min;
        int seconds = local->tm_sec;

        float hour_angle = (hours % 12 + minutes / 60.0) * 30 - 90;
        float minute_angle = (minutes + seconds / 60.0) * 6 - 90;
        float second_angle = seconds * 6 - 90;

        drawHand(centerX, centerY, radius - 50, hour_angle, RED);
        drawHand(centerX, centerY, radius - 30, minute_angle, GREEN);
        drawHand(centerX, centerY, radius - 20, second_angle, BLUE);

        delay(1000);
    }

    closegraph();
    return 0;
}
