#include <stdio.h>
#include <stdlib.h>

// Bu kod kullanıcıdan girilen bir sayının asal sayı olup olmadığını bulur.
int main(void) 
{
	int n;
	printf("Bir sayi giriniz=");
	scanf("%d", &n);
	while(n>=1)
	{
		if(n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0 && n!=1)
			printf("%d\n", n);
			if(n==2)
			   printf("2\n");
			   if(n==3)
			      printf("3\n");
			      if(n==5)
			        printf("5\n");
			        if(n==7)
			           printf("7\n");
		
	n=n-1;
		
	}
	system("PAUSE");
	return (0);	
}
