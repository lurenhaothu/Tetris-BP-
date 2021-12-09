#pragma once
#include "screenn.h"
class stock
{
private:
	int sort;//1,line 2,z,3,fanz,4,L,5,fanL,6,T,7,o
	int x,y;
	int situation;
	int block[4][2];
	int maxs;
	screenn *scr;
public:
	stock();
	bool draw();
	void clear();
	void setXY(int x1,int y1);
	void setS(int s);
	int gx(){return x;}
	int gy(){return y;}
	int gs(){return situation;}
	int gms(){return maxs;}
	void changeXY(int x1,int y1);
	bool move(int x,int y);
	bool left();
	bool right();
	bool down();
	bool turn();
	void refresh_block();
	void renew();
};