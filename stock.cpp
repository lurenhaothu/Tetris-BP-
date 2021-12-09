#include <iostream>
#include "stock.h"
extern screenn sc;
bool stock::turn()
{
	int s=gs();
	clear();
	if(gs()<maxs)setS(s+1);
	else setS(0);
	if(draw()) return true;
	else {
		setS(s);
		draw();
		return false;
	}	
}
bool stock::draw()
	{
		if(block[0][0]>19||block[0][0]<0
			||block[1][0]>19||block[1][0]<0
			||block[2][0]>19||block[2][0]<0
			||block[3][0]>19||block[3][0]<0)
		{return false;}
		else if(block[0][1]>9||block[0][1]<0
			||block[1][1]>9||block[1][1]<0
			||block[2][1]>9||block[2][1]<0
			||block[3][1]>9||block[3][1]<0)
		{return false;}
		else if(scr->plot[block[0][0]][block[0][1]]==1
			||scr->plot[block[1][0]][block[1][1]]==1
			||scr->plot[block[2][0]][block[2][1]]==1
			||scr->plot[block[3][0]][block[3][1]]==1)
		{return false;}
		else{
			scr->plot[block[0][0]][block[0][1]]=1;
			scr->plot[block[1][0]][block[1][1]]=1;
			scr->plot[block[2][0]][block[2][1]]=1;
			scr->plot[block[3][0]][block[3][1]]=1;
			return true;
		}
	}
void stock::clear()
{
	scr->plot[block[0][0]][block[0][1]]=0;
	scr->plot[block[1][0]][block[1][1]]=0;
	scr->plot[block[2][0]][block[2][1]]=0;
	scr->plot[block[3][0]][block[3][1]]=0;
}
void stock::setXY(int x1,int y1)
{
	x=x1;
	y=y1;
	refresh_block();
}
void stock::setS(int s)
{
	situation=s;
	refresh_block();
}
void stock::changeXY(int x1,int y1)
{
	x+=x1;
	y+=y1;
	refresh_block();
}
bool stock::move(int x,int y)
{
	clear();
	changeXY(x,y);
	if(draw()) return true;
	else {
		changeXY(-x,-y);
		draw();
		return false;
	}	
}
bool stock::left()
{
	if(move(0,-1)) return true;
	else return false;
}
bool stock::right()
{
	if(move(0,1)) return true;
	else return false;
}
bool stock::down()
{
	if(move(1,0)){ return true;}
	else return false;
}
void stock::refresh_block()
{
	if(sort==1){
		switch(gs())
		{
		case 0:
			block[0][0]=gx();
			block[0][1]=gy()-1;
			block[1][0]=gx();
			block[1][1]=gy();
			block[2][0]=gx();
			block[2][1]=gy()+1;
			block[3][0]=gx();
			block[3][1]=gy()+2;
			break;

		case 1:
			block[0][0]=gx()-1;
			block[0][1]=gy();
			block[1][0]=gx();
			block[1][1]=gy();
			block[2][0]=gx()+1;
			block[2][1]=gy();
			block[3][0]=gx()+2;
			block[3][1]=gy();
			break;
		}	
	}
	else if(sort==2){
		switch(gs())
		{
		case 0://heng
			block[0][0]=gx();
			block[0][1]=gy()-1;
			block[1][0]=gx();
			block[1][1]=gy();
			block[2][0]=gx()+1;
			block[2][1]=gy();
			block[3][0]=gx()+1;
			block[3][1]=gy()+1;
			break;

		case 1:
			block[0][0]=gx()-1;
			block[0][1]=gy();
			block[1][0]=gx();
			block[1][1]=gy()-1;
			block[2][0]=gx();
			block[2][1]=gy();
			block[3][0]=gx()+1;
			block[3][1]=gy()-1;
			break;
		}	
	}
	else if(sort==3){
		switch(gs())
		{
		case 0://heng
			block[0][0]=gx();
			block[0][1]=gy()+1;
			block[1][0]=gx();
			block[1][1]=gy();
			block[2][0]=gx()+1;
			block[2][1]=gy();
			block[3][0]=gx()+1;
			block[3][1]=gy()-1;
			break;

		case 1:
			block[0][0]=gx()-1;
			block[0][1]=gy();
			block[1][0]=gx();
			block[1][1]=gy();
			block[2][0]=gx();
			block[2][1]=gy()+1;
			block[3][0]=gx()+1;
			block[3][1]=gy()+1;
			break;
		}	
	}
	else if(sort==4){
		switch(gs())
		{
		case 0://heng
			block[0][0]=gx()-1;
			block[0][1]=gy();
			block[1][0]=gx();
			block[1][1]=gy();
			block[2][0]=gx()+1;
			block[2][1]=gy();
			block[3][0]=gx()+1;
			block[3][1]=gy()+1;
			break;

		case 1:
			block[0][0]=gx();
			block[0][1]=gy()+1;
			block[1][0]=gx();
			block[1][1]=gy();
			block[2][0]=gx();
			block[2][1]=gy()-1;
			block[3][0]=gx()+1;
			block[3][1]=gy()-1;
			break;

		case 2:
			block[0][0]=gx()-1;
			block[0][1]=gy();
			block[1][0]=gx();
			block[1][1]=gy();
			block[2][0]=gx()+1;
			block[2][1]=gy();
			block[3][0]=gx()-1;
			block[3][1]=gy()-1;
			break;
		case 3:
			block[0][0]=gx();
			block[0][1]=gy()+1;
			block[1][0]=gx();
			block[1][1]=gy();
			block[2][0]=gx();
			block[2][1]=gy()-1;
			block[3][0]=gx()-1;
			block[3][1]=gy()+1;
			break;
		}
	}
	else if(sort==5){
		switch(gs())
		{
		case 0://heng
			block[0][0]=gx()-1;
			block[0][1]=gy();
			block[1][0]=gx();
			block[1][1]=gy();
			block[2][0]=gx()+1;
			block[2][1]=gy();
			block[3][0]=gx()+1;
			block[3][1]=gy()-1;
			break;

		case 1:
			block[0][0]=gx();
			block[0][1]=gy()+1;
			block[1][0]=gx();
			block[1][1]=gy();
			block[2][0]=gx();
			block[2][1]=gy()-1;
			block[3][0]=gx()-1;
			block[3][1]=gy()-1;
			break;

		case 2:
			block[0][0]=gx()-1;
			block[0][1]=gy();
			block[1][0]=gx();
			block[1][1]=gy();
			block[2][0]=gx()+1;
			block[2][1]=gy();
			block[3][0]=gx()-1;
			block[3][1]=gy()+1;
			break;
		case 3:
			block[0][0]=gx();
			block[0][1]=gy()+1;
			block[1][0]=gx();
			block[1][1]=gy();
			block[2][0]=gx();
			block[2][1]=gy()-1;
			block[3][0]=gx()+1;
			block[3][1]=gy()+1;
			break;
		}
	}
	else if(sort==6){
		switch(gs())
		{
		case 0://heng
			block[0][0]=gx()-1;
			block[0][1]=gy();
			block[1][0]=gx();
			block[1][1]=gy();
			block[2][0]=gx()+1;
			block[2][1]=gy();
			block[3][0]=gx();
			block[3][1]=gy()-1;
			break;

		case 1:
			block[0][0]=gx();
			block[0][1]=gy()+1;
			block[1][0]=gx();
			block[1][1]=gy();
			block[2][0]=gx();
			block[2][1]=gy()-1;
			block[3][0]=gx()-1;
			block[3][1]=gy();
			break;

		case 2:
			block[0][0]=gx()-1;
			block[0][1]=gy();
			block[1][0]=gx();
			block[1][1]=gy();
			block[2][0]=gx()+1;
			block[2][1]=gy();
			block[3][0]=gx();
			block[3][1]=gy()+1;
			break;
		case 3:
			block[0][0]=gx();
			block[0][1]=gy()+1;
			block[1][0]=gx();
			block[1][1]=gy();
			block[2][0]=gx();
			block[2][1]=gy()-1;
			block[3][0]=gx()+1;
			block[3][1]=gy();
			break;
		}
	}
	else if(sort==7){
			block[0][0]=gx();
			block[0][1]=gy();
			block[1][0]=gx()+1;
			block[1][1]=gy();
			block[2][0]=gx();
			block[2][1]=gy()+1;
			block[3][0]=gx()+1;
			block[3][1]=gy()+1;}
}
stock::stock(){
		scr=&sc;
		sort=rand()%7+1;
		setXY(1,4);
		setS(0);
		switch(sort){
		case 1:maxs=1;break;
		case 2:maxs=1;break;
		case 3:maxs=1;break;
		case 4:maxs=3;break;
		case 5:maxs=3;break;
		case 6:maxs=3;break;
		case 7:maxs=0;break;}
}
void stock::renew()
{
	sort=rand()%7+1;
	setXY(1,4);
	setS(0);
	switch(sort){
		case 1:maxs=1;break;
		case 2:maxs=1;break;
		case 3:maxs=1;break;
		case 4:maxs=3;break;
		case 5:maxs=3;break;
		case 6:maxs=3;break;
		case 7:maxs=0;break;}
	draw();
}