#include <iostream>
#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
#define keyup 72
#define keyleft 75
#define keydown 80
#define keyright 77
#define keyenter 13
#define keyspace 32
#define keyesc 27
#define backspace 8

using  namespace std;

int main() {
    int gd = 0, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    cleardevice();
    int x = 50, y = 50;
    char key;
    moveto(x, y);

    cout << "\n Press Keyboard keys to draw (ESC to Exit): ";

    do {
        key = getch();
        switch (key) {
        case keyup:
            y = y - 20;
            break;
        case keydown:
            y = y + 20;
            break;
        case keyright:
            x = x + 20;
            break;
        case keyleft:
            x = x - 20;
            break;
        case 'b':
            setcolor(0);
            break;
        case 'y':
            setcolor(14);
            break;
        case 'r':
            setcolor(4);
            break;
        case keyspace:
            x = x + 20;
            y = y + 20;
            break;
        case backspace:
            x = x - 20;
            y = y + 20;
            break;
        case keyenter:
            x = x + 20;
            y = y - 20;
            break;
        case keyesc:
            exit(0);
        default:;
        }
        lineto(x, y);
    } while (key != keyesc);

    closegraph();
    return 0;
}
