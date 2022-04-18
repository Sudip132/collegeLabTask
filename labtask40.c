#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main(){
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    rectangle(200,100,500,200);
    setcolor(WHITE);
    getch();
    closegraph();
    return 0;
}