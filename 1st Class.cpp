#include<iostream>
#include<conio.h>
#include<graphics.h>


int main (int argc, char const *argv[]) {
    int gd = DETECT, gm;
    initgraph(&gd,&gm,(char*)"");
    putpixel(80,90,4);
    return 0;
}