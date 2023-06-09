#include <stdio.h>
#include <stdlib.h>

// Bu kod girilen iki sayının arasındaki asal sayıları göstermektedir.

int main(void) 
{
	int m, n;
	printf("bir buyuk bir kucuk sayi giriniz\n m= n=");
	scanf("%d%d", &m, &n);
	while(m<n)
	{
		printf("tekrar giriniz  m=\n n=");
		scanf("%d%d", &m, &n);
	}
	while(m>=n)
	{
		if(n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0 && n!=1)
		   printf("%d\n", n);
		  	 else if(n==2)
		  		 printf("2\n");
		  			 else if(n==3)
		   				printf("3\n");
		  					 else if(n==5)
		 						  printf("5\n");
		  							 else if(n==7)
		  								 printf("7\n");
		   
		   n=n+1;
	}
	return 0;
}
