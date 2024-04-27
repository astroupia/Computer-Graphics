#include<iostream>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>

int main() {
    int gd =0, gm;
    initgraph(&gd, &gm, "..\\bgi");

    int i=0;
      while(!kbhit()){
      setcolor(rand()%16);
      setlinestyle(rand()%5,0,rand()%4);
      rectangle(315-i,235-i,325+i,245+i);
      delay(25);
      i=i+10;
      if(i>240)
      {
      i=0;
      cleardevice();
      }
      }



  getch();
  }
