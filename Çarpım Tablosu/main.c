#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
	int n,b, deger;
	printf("Lutfen sayý giriniz=");
	scanf("%d", &n);
	b=1;
	while(b>=1 && b<=10)
	{
		deger=n*b;
		printf("sonuc=%d\n", deger);
		b+=1;
		
	}
	system("PAUSE");
	return 0;
}
