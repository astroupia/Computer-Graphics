#include<iostream>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>

int main() {
    int gd =0, gm;
    initgraph(&gd, &gm, "..\\bgi");

  setfillstyle(7,10);
   bar(10,10,100,120);
    setfillstyle(6,14);
    bar3d(150,150,250,300,30,1);
    setfillstyle(3,4);
    floodfill(200,145,15);
    setfillstyle(3,5);
    floodfill(270,200,15);


  getch();
  }
