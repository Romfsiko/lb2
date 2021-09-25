// Task1.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <cmath>
#include <stdio.h>
#include <math.h>

bool isInArea(double x, double y) 
{
	if (-1 < x < 0 && -1 < y < 1) 
		return(1); 
	else if (pow(x,2)+pow(y,2)< 1) 
		return(1); 
	else 
		return(0);
}
