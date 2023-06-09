#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int a, b, EB;
	printf("Lutfen pozitif sayi giriniz=");
	scanf("%d", &a);
	b=1;
	EB=1;
	while(a>=0 && b==1)
	{
		while(a>=0)
	    {
		printf("Lutfen pozitif sayi giriniz=");
		scanf("%d", &a);
		  if(a>=EB)
	     	EB=a;
     	}
	
		b=-1;
	}
	printf("Buyuk sayý=%d", EB);
	system("PAUSE");
	return 0;
}
