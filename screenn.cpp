#include <windows.h>
#include "screenn.h"
screenn::screenn()
{
	for(int i=0;i<20;i++){
		for(int j=0;j<10;j++){
			plot[i][j]=0;
			rect[i][j].top=gap*(i+1)+cell*i;
			rect[i][j].bottom=gap*(i+1)+cell*(i+1);
			rect[i][j].left=gap*(j+1)+cell*j;
			rect[i][j].right=gap*(j+1)+cell*(j+1);
			rect1[i][j].top=gap*(i+1)+cell*i+1;
			rect1[i][j].bottom=gap*(i+1)+cell*(i+1)-1;
			rect1[i][j].left=gap*(j+1)+cell*j+1;
			rect1[i][j].right=gap*(j+1)+cell*(j+1)-1;
		}
	}
}
void screenn::prin(HDC hdc)
{
	for(int i=0;i<20;i++){
		for(int j=0;j<10;j++){
			FrameRect ( hdc,&rect[i][j], ( HBRUSH ) GetStockObject ( BLACK_BRUSH ) );
		}
	}
}
void screenn::fill(HDC hdc)
{
	for(int i=0;i<20;i++){
		for(int j=0;j<10;j++){
			if(plot[i][j])FillRect ( hdc,&rect1[i][j], ( HBRUSH ) GetStockObject ( BLACK_BRUSH ) );
			else FillRect ( hdc,&rect1[i][j], ( HBRUSH ) GetStockObject ( WHITE_BRUSH ) );
		}
	}
}
void screenn::clearrow()
{
	for(int i=0;i<20;i++){
		if(plot[19-i][0]==1
			&&plot[19-i][1]==1
			&&plot[19-i][2]==1
			&&plot[19-i][3]==1
			&&plot[19-i][4]==1
			&&plot[19-i][5]==1
			&&plot[19-i][6]==1
			&&plot[19-i][7]==1
			&&plot[19-i][8]==1
			&&plot[19-i][9]==1)
		{
			for(int j=19-i;j>=1;j--)
			{
				for(int t=0;t<10;t++)
				{
					plot[j][t]=plot[j-1][t];
				}
			}
			for(int t=0;t<10;t++)
			{
				plot[0][t]=0;
			}
		}
	}
}