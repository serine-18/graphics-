#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main ()
{
    int gdriver=DETECT,gmode,i;
    initgraph(&gdriver,&gmode,NULL);
    //moving the car
    for(i=0;i<=639;i++)
    //car body
    line(50+i,300,70+i,300);
    arc(85+i,300,0,180,15);
    line(100+i,300,140+i,300);
    arc(155+i,300,0,180,15);
    line(170+i,300,190+i,300);
    line(190+i,300,190+i,280);
    line(160+i,250,80+i,250);
    line(160+i,250,190+i,280);
    line(50+i,280,50+i,300);
    line(50+i,280,80+i,250);

    // car window
    line(126+i,260,126+i,280);
    line(126+i,260,155+i,260);
    line(126+i,280,175+i,280);
    line(175+i,280,155+i,260);
    line(115+i,260,115+i,280);
    line(115+i,260,85+i,260);
    line(115+i,280,65+i,280);
    line(65+i,280,85+i,260);

    //wheels

    circle(85+i,300,10);
    circle(155+i,300,10);
    circle(85,300,1);
    circle(155,300,1);

    line(85,290,85,300);
    line(76,295,85,300);
    line(79,307,85,300);
    line(95,296,85,300);
    line(92,308,85,300);

    line(155,300,155,290);
    line(145,296,155,300);
    line(149,307,155,300);
    line(164,296,155,300);
    line(163,307,155,300);

    //man
    circle(140,272,4);
    line(145,275,150,280);
    line(137,274,131,280);
    //color
    setfillstyle(1,RED);
    floodfill(55,280,WHITE);
    //road
    line(0,312,639,312);

    getch();
}