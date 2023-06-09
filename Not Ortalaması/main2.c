#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int n, not;
	double toplam;
	n=0;
	toplam=0;
	printf("Lutfen notu giriniz=\n");
	scanf("%d", &not);
	while(not>=0 && not<=100)	
	{
	if(not>=0 && not<=100)
	     {
			toplam=toplam+not;
			n=n+1;
			printf("Lutfen notu giriniz=\n");
			scanf("%d", &not);
         }
    if(not>100)    
      	{ 
      		 printf("Notu kontrol ediniz!\n");
	  		 printf("Lutfen notu giriniz=\n");
	 		 scanf("%d", &not);     
	 	 }
   	}
    printf("Not ortalamasi=%.2lf\n\n", toplam/n);
	system("PAUSE");
	return (0);
	
   	/*Ergülü Bozkurt 1030210410*/
}
