#pragma once
#include <windows.h>
int const cell=20;
int const gap=5;

class screenn
{
friend class stock;
friend class net;
friend int height();
friend int empty();

private:
	int plot[20][10];
	RECT rect[20][10];
	RECT rect1[20][10];
public:
	screenn();
	void prin(HDC hdc);
	void fill(HDC hdc);
	void clearrow();
};