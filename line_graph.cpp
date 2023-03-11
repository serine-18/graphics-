
#include <graphics.h>
#include <math.h>
#include<stdio.h>
#include<stdlib.h>
void linerectangle(int,int ,int,int );
int main(){
    int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);

    linerectangle(100,300,200,45);
    getch();
    closegraph();
}

void linerectangle(int x,int y ,int lenght,int angle ){
    
     double rad= (double) angle*M_PI/180;
    line(x,y,x+(lenght*cos(rad)),y-(lenght*sin(rad)));
}
