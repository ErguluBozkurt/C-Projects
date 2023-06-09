#include <stdio.h>
#include <stdlib.h>



int main(void) 
{
	int yas;
	double boy, kilo, x, vucudendeksi;
	printf ("boy ve kilo durumlarini giriniz=");
	scanf ("%lf%lf", &boy, &kilo);
	x=boy*boy;
	vucudendeksi=kilo/x;
	printf("%.1lf\n", vucudendeksi);
	printf("yasinizi giriniz=");
	scanf("%d", &yas);
	if(yas>=19 && yas<=24)
	{
		if (vucudendeksi<=18)
	
		printf("zayifsýnýz, lütfen diyetisyene baþvurunuz");
		else
		printf("ideal durumdasiniz");
	}
	if(yas>=25 && yas<=34)
	{	
		if(vucudendeksi>=19 && vucudendeksi<=25)
		printf("ideal durumdasiniz");
		else
		{
			if(vucudendeksi<19)
			printf("zayifsiniz");
			else
			printf("kilolusunuz");
		}
	}
	if(yas>=35 && yas<=44)
	{	
		if(vucudendeksi>=26 && vucudendeksi<=30)
		printf("ideal durumdasiniz");
		
		else
		{
			if(vucudendeksi<26)
			printf("zayifsiniz");
			else
			printf("kilolusunuz, diyet yapmanizi oneriyoruz");
     	}
	}
	if(yas<19 && yas>45)
	printf("vucud endeksi bulunamadi");
	system("PAUSE");
	
	return 0;
}
