#include<graphics.h>

int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	circle(100,100,10);
	getch();
	closegraph();
	return 0;
}
