#include "cla.cpp"
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
	stock_line stock_line1(1);
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
	stock_line stock_line2(2);
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
	stock_line stock_line3(3);
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
	stock_line stock_line4(4);
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
	stock_line stock_line5(5);
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
	stock_line stock_line6(6);
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
	stock_line stock_line7(7);
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
	switch (a->getsort()) {
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

double W1[200][200], W2[200][34];
double J[2][200], J3[34];
double D[34];
double U[2][200], U3[34];
double const u = 0.5;
void change() {
	for (int i = 0; i < 34; i++) {
		if (i != setluodian[0] && i != setluodian[1] + 10 && i != setluodian[2] + 30)
			U3[i] = 0;
		else
			U3[i] = 1;
	}

	//第三层
	for (int i = 0; i < 34; i++)
		J3[i] = U3[i] - D[i];

	//第二层
	for (int i = 0; i < 200; i++)
		for (int m = 0; m < 34; m++)
			J[1][i] += J3[m] * U3[m] * (1 - U3[m])*W2[i][m];

	//第一层
	for (int i = 0; i < 200; i++)
		for (int m = 0; m < 200; m++)
			J[0][i]+= J[1][m]*U[1][m]*(1 - U[1][m])*W1[i][m];

	//修改W1
	for (int i = 0; i < 200; i++)
		for (int j = 0; j < 200; j++)
			W1[i][j] = W1[i][j] - u*J[0][j] * U[1][j] * (1 - U[1][j])*U[0][i];

	//修改W2
	for (int i = 0; i < 200; i++)
		for (int j = 0; j < 34; j++)
			W1[i][j] = W1[i][j] - u*J[0][j] * U[1][j] * (1 - U[1][j])*U[0][i];
}