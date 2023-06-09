#include <stdio.h>
#include <stdlib.h>


int basamak_toplam(int a);
int main(void) 
{
	int x, toplam;
	printf("Dort basamakli bir sayi giriniz=");
	scanf("%d", &x);
	toplam=basamak_toplam(x);
	printf("toplam=%d", toplam);
	getch();
	return (0);
}
int basamak_toplam(int a)
{
	int rakam, sonuc;
	sonuc=0;
	while(a>0)
	{
		rakam=a%10;
		a=a/10;
		sonuc=sonuc+rakam;
	}
	return(sonuc);
}
        /* Ergülü Bozkurt 1030210410 */
