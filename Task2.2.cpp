#include <stdio.h>
#include <math.h>
double func(double x) 
{ 
	double f;
	x >= -3.5 ? (f = 4*pow(x, 2) + 2 * x - 19) : (f = (-2*x) / (-4*x+1));
	return(f);
}
