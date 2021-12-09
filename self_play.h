#pragma once
#include "net.h"
void plot_move(int x[20],int y[10],int s[4],HDC hdc);
void self_play(HDC hdc);
void BP(int situ,int x[20],int y[10],int s[4]);