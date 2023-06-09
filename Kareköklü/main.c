#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Bu kod "ax^2 + bx + c=0" gibi denklemlerin köklerini bulur. 
void bul(int a, int b, int c);
int main(void) 
{
	int x, y, z;
	printf("uc sayi giriniz=");
	scanf("%d%d%d", &x, &y, &z);
	bul(x,y,z);
	system("PAUSE");
	return 0;
}
void bul(int a, int b, int c)
{
	double x1, x2, delta;
	delta=b*b-4*a*c;
	if(delta>0)
	{
		x1=(-b+sqrt(delta))/(2.0*a);
		x2=(-b-sqrt(delta))/(2.0*a);
		printf("x1=%.2lf\n, x2=%.2lf", x1, x2);
	}
	else if(delta==0)
	{
		x1=-b/(2.0*a);
		printf("x1=%.2lf", x1);
	}
	else if(delta<0)
	{
		x1=(-b+sqrt(delta))/(2.0*a);
		x2=(-b-sqrt(delta))/(2.0*a);
		printf("x1=%.2lfi, x2=%.2lfi", x1, x2);
	}
}
