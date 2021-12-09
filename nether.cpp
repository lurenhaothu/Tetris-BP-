#include <math.h>
#include "nether.h"
double nether::cal()
{
	outt=0;
	for(int i=0;i<200;i++)
	{
		outt+=inn[i]*w[i];
	}
	outt=1/(1+pow(2.71828,-outt));
	return outt;
}