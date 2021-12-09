#include <windows.h>
#include "stock.h"
#include "screenn.h"
#include "net.h"
extern stock a;
extern screenn sc;
extern net nettt;
int setluodian[3];
int height() {
	int sum[20];
	int n = -1;
	for (int i; i < 10; i++)
		for (int j = 0; j < 20; j++) {
			if (sc.plot[j][i] = 0)
				sum[j] += 1;
		}
	for (int i = 0; sum[i] != 10; i++)
		n = i;
	return 20 - n - 1;
}
int empty() {
	int n;
	for (int i; i < 10; i++)
		for (int j = 0; (j < 20) && sc.plot[i][j - 1] == 0; j++)
			if (sc.plot[j][i] == 1)
				for (int k = 1; k < 20 - j; k++)
					if (sc.plot[j + k][i] == 0)
						n += 1;
	return n;
}
int grade(int n, int m)//n height;m empty;
{
	if (n <= 10)
		return n*n + 2 * m*m;
	else
		return 2 * n*n + m*m;
}
int main1() {
	int qwe1[10][4][2];//x的位置，方向，y的位置，grade的值
	stock stock_line1;
	stock_line1.setS(1);
	for (int i = 0; i < 10; i++) {
		stock_line1.changeXY(i, 1);
		for (int j = 0; j < 4; j++) {
			stock_line1.setS(j);
			for (int i = 0; stock_line1.draw(); i++) {
				stock_line1.move(0, 1);
				stock_line1.refresh_block();
			}
			qwe1[i][j][0] = stock_line1.gy();
			qwe1[i][j][1] = grade(height(), empty());
		}
	}
	int max=0, numi=0, numj=0;
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 4;j++)
			if (qwe1[i][j][1] >= max) {
				max = qwe1[i][j][1];
				numi = i;
				numj = j;
			}
	setluodian[0] = numi;
	setluodian[1] = qwe1[numi][numj][0];
	setluodian[2] = numj;
}  //方块1
int main2() {
	int qwe2[10][4][2];//x的位置，方向，y的位置，grade的值
	stock stock_line2;
	stock_line2.setS(2);
	for (int i = 0; i < 10; i++) {
		stock_line2.changeXY(i, 1);
		for (int j = 0; j < 4; j++) {
			stock_line2.setS(j);
			for (int i = 0; stock_line2.draw(); i++) {
				stock_line2.move(0, 1);
				stock_line2.refresh_block();
			}
			qwe2[i][j][0] = stock_line2.gy();
			qwe2[i][j][1] = grade(height(), empty());
		}
	}
	int max = 0, numi = 0, numj = 0;
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 4; j++)
			if (qwe2[i][j][1] >= max) {
				max = qwe2[i][j][1];
				numi = i;
				numj = j;
			}
	setluodian[0] = numi;
	setluodian[1] = qwe2[numi][numj][0];
	setluodian[2] = numj;
}  //方块2
int main3() {
	int qwe3[10][4][2];//x的位置，方向，y的位置，grade的值
	stock stock_line3;
	stock_line3.setS(3);
	for (int i = 0; i < 10; i++) {
		stock_line3.changeXY(i, 1);
		for (int j = 0; j < 4; j++) {
			stock_line3.setS(j);
			for (int i = 0; stock_line3.draw(); i++) {
				stock_line3.move(0, 1);
				stock_line3.refresh_block();
			}
			qwe3[i][j][0] = stock_line3.gy();
			qwe3[i][j][1] = grade(height(), empty());
		}
	}
	int max = 0, numi = 0, numj = 0;
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 4; j++)
			if (qwe3[i][j][1] >= max) {
				max = qwe3[i][j][1];
				numi = i;
				numj = j;
			}
	setluodian[0] = numi;
	setluodian[1] = qwe3[numi][numj][0];
	setluodian[2] = numj;
}
int main4() {
	int qwe4[10][4][2];//x的位置，方向，y的位置，grade的值
	stock stock_line4;
	stock_line4.setS(4);
	for (int i = 0; i < 10; i++) {
		stock_line4.changeXY(i, 1);
		for (int j = 0; j < 4; j++) {
			stock_line4.setS(j);
			for (int i = 0; stock_line4.draw(); i++) {
				stock_line4.move(0, 1);
				stock_line4.refresh_block();
			}
			qwe4[i][j][0] = stock_line4.gy();
			qwe4[i][j][1] = grade(height(), empty());
		}
	}
	int max = 0, numi = 0, numj = 0;
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 4; j++)
			if (qwe4[i][j][1] >= max) {
				max = qwe4[i][j][1];
				numi = i;
				numj = j;
			}
	setluodian[0] = numi;
	setluodian[1] = qwe4[numi][numj][0];
	setluodian[2] = numj;
}
int main5() {
	int qwe5[10][4][2];//x的位置，方向，y的位置，grade的值
	stock stock_line5;
	stock_line5.setS(5);
	for (int i = 0; i < 10; i++) {
		stock_line5.changeXY(i, 1);
		for (int j = 0; j < 4; j++) {
			stock_line5.setS(j);
			for (int i = 0; stock_line5.draw(); i++) {
				stock_line5.move(0, 1);
				stock_line5.refresh_block();
			}
			qwe5[i][j][0] = stock_line5.gy();
			qwe5[i][j][1] = grade(height(), empty());
		}
	}
	int max = 0, numi = 0, numj = 0;
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 4; j++)
			if (qwe5[i][j][1] >= max) {
				max = qwe5[i][j][1];
				numi = i;
				numj = j;
			}
	setluodian[0] = numi;
	setluodian[1] = qwe5[numi][numj][0];
	setluodian[2] = numj;
}
int main6() {
	int qwe6[10][4][2];//x的位置，方向，y的位置，grade的值
	stock stock_line6;
	stock_line6.setS(6);
	for (int i = 0; i < 10; i++) {
		stock_line6.changeXY(i, 1);
		for (int j = 0; j < 4; j++) {
			stock_line6.setS(j);
			for (int i = 0; stock_line6.draw(); i++) {
				stock_line6.move(0, 1);
				stock_line6.refresh_block();
			}
			qwe6[i][j][0] = stock_line6.gy();
			qwe6[i][j][1] = grade(height(), empty());
		}
	}
	int max = 0, numi = 0, numj = 0;
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 4; j++)
			if (qwe6[i][j][1] >= max) {
				max = qwe6[i][j][1];
				numi = i;
				numj = j;
			}
	setluodian[0] = numi;
	setluodian[1] = qwe6[numi][numj][0];
	setluodian[2] = numj;
}
int main7() {
	int qwe7[10][4][2];//x的位置，方向，y的位置，grade的值
	stock stock_line7;
	stock_line7.setS(7);
	for (int i = 0; i < 10; i++) {
		stock_line7.changeXY(i, 1);
		for (int j = 0; j < 4; j++) {
			stock_line7.setS(j);
			for (int i = 0; stock_line7.draw(); i++) {
				stock_line7.move(0, 1);
				stock_line7.refresh_block();
			}
			qwe7[i][j][0] = stock_line7.gy();
			qwe7[i][j][1] = grade(height(), empty());
		}
	}
	int max = 0, numi = 0, numj = 0;
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 4; j++)
			if (qwe7[i][j][1] >= max) {
				max = qwe7[i][j][1];
				numi = i;
				numj = j;
			}
	setluodian[0] = numi;
	setluodian[1] = qwe7[numi][numj][0];
	setluodian[2] = numj;
}
int main() {
	switch (a.gs()) {
	case 1:
		main1();
		break;
	case 2:
		main2();
		break;
	case 3:
		main3();
		break;
	case 4:
		main4();
		break;
	case 5:
		main5();
		break;
	case 6:
		main6();
		break;
	case 7:
		main7();
		break;
	};
}
void BP(int situ,double x[20],double y[10],double s[4]);
void plot_move(double x[20],double y[10],double s[4],HDC hdc);
void self_play(HDC hdc)
{
	double x[20],y[10],s[4];
	BP(a.gs(),x,y,s);
	plot_move(x,y,s,hdc);
}
void BP(int situ,double x[20],double y[10],double s[4])
{
	nettt.cal();
	for(int i=0;i<20;i++)
	{
		x[i]=nettt.ne2[i].outt;
	}
	for(int i=0;i<10;i++)
	{
		y[i]=nettt.ne2[i+20].outt;
	}
	for(int i=0;i<20;i++)
	{
		s[i]=nettt.ne2[30+i].outt;
	}
}
void plot_move(double x[20],double y[10],double s[4],HDC hdc)
{
	double max_y=0;int n=0;
	for( int i=0;i<10;i++){
		if (y[i]>max_y)
			{max_y=y[i];
		n=i;}
	}
	double max_x=0;int m=0;
	for( int q=0;q<20;q++){
		if (x[q]>max_x)
		{max_x=x[q];
		m=q;}
	}
	double max_s=0;int l=0;
	for(int p=0;p<4;p++){
		if(s[p]>max_s)
		{max_s=s[p];
		l=p;}
	}
	m=10;n=4;l=0;
	while(a.gx()<n){
		a.right();
		sc.fill(hdc);
	}

	while (a.gx()>n){
		a.left();
		sc.fill(hdc);
	}
	while (a.gs()!=l){
		a.turn();
		sc.fill(hdc);
	}
	while (a.gx()<m){
			   a.down();
			   sc.fill(hdc);
		   }
	

   stock choice;
   choice.setS(l);
   choice.setXY(m,n);
	   
   while (choice.gx()>1&&choice.move(-1,0));
   if(choice.gx()!=1){
	   choice.setXY(m,n+1);
	   while(choice.gx()&&choice.move(-1,0));
	   if(choice.gx()==1){
		   a.right();
		   while (a.gx()<m){
			   a.down();
			   sc.fill(hdc);
		   }
		   a.left();
	   }
   }
   while(choice.gx()>1&&choice.move(-1,0));
   if(choice.gx()!=1){
	   choice.setXY(n+1,m);
	   while(choice.gx()&&choice.move(-1,0));
	   if(choice.gx()==1){
		   a.left();
		    while (a.gx()<m){
			   a.down();
			   sc.fill(hdc);
		   }
			a.right();
	   }
   }
}