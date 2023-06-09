#include <stdio.h>
#include <stdlib.h>


// Bu kod satır ve sutunlardan oluşan bir dizi tanımlayıp, sonuç olarak satır ve sutun ortalamasını bizlere vermektedir.
int main(void) 
{
	double a[10][2], satir_ort[10], sutun_ort[2];
	int i, j,n=0, m=0;
	double toplam1=0,toplam2=0;
	printf("satirlari giriniz=\n");
	for(i=0; i<10; i++)
	{
		printf("sutunlari giriniz=");
		for(j=0; j<2; j++)
		scanf("%lf", &a[i][j]);
	}
    for(j=0; j<2; j++)
    {
    	for(i=0; i<10; i++)	
    	toplam1=toplam1+a[i][j];
    	sutun_ort[m]=toplam1/10.0;
    	m=m+1;
    	toplam1=0;
	}
	for(i=0; i<10; i++)	
	{
		for(j=0; j<2; j++)
		toplam2=toplam2+a[i][j];
		satir_ort[n]=toplam2/2.0;
		toplam2=0;
		n=n+1;
	}
	for(j=0; j<m; j++)
	printf("%d. sutun ortalamasi=%.2lf\n\n\n",j+1, sutun_ort[j]);
	for(i=0; i<n; i++)
	printf("%d. satir ortalamasi=%.2lf\n",i+1, satir_ort[i]);
	system("PAUSE");
	return 0;
}
