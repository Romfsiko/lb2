
#include <stdio.h> 
#include <math.h>
#include <concepts>

 bool isInArea(double x, double y);
 double func(double x);
 int main(void)
 {
	 double x, y;
	 int n;
	 printf("Choose task 1 or 2: \n");
	 scanf_s("%d", &n);
	 switch (n)
	 {
	 case 1:
		 printf("task №1:\n");
		 printf("x = ");
		 scanf_s("%lf", &x);
		 printf("y = ");
		 scanf_s("%lf", &y);
		 isInArea(x, y);
		 printf("%i", isInArea(x, y));
		 break;

	 case 2:
		 printf("task №2:\n");
		 printf("x = ");
		 scanf_s("%lf", &x);
		 func(x);
		 printf("%d", func(x));
		 break;
	 default:
		 printf("incorrect information, please try again ");
		 break;
	 }
	 return(0);
 }
 