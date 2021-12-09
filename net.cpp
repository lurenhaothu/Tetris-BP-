#include<fstream>
#include<iostream>
using namespace std;
#include "net.h"
#include "screenn.h"
extern screenn sc;
net::net()
	{
		ifstream file("random1");
		for(int i=0;i<200;i++){
			for(int j=0;j<200;j++){
				file>>ne1[i].w[j];
			}
		}
		for(int i=0;i<34;i++){
			for(int j=0;j<200;j++){
				file>>ne2[i].w[j];
			}
		}
	}
void net::cal()
{
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<10;j++)
		{
			inn[i*20+j]=sc.plot[i][j];
		}
	}		
	for(int i=0;i<200;i++)		
	{
		for(int j=0;j<200;j++)
		{
			ne1[j].inn[i]=*(inn+i);
		}
	}
	for(int i=0;i<200;i++)
	{
		double r=ne1[i].cal();
		for(int j=0;j<34;j++)
		{
			ne2[j].inn[i]=r;
		}
	}
	for(int i=0;i<34;i++)
	{
		ne2[i].cal();
	}
}