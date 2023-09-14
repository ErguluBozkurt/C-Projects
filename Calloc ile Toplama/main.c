#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int n, i;
	int *dizi1, *dizi2, *dizi3;
	printf("Dizi uzunlugu giriniz:");
	scanf("%d", &n);
	dizi1 = (int*) calloc(n, sizeof(int));
	dizi2 = (int*) calloc(n, sizeof(int));
	dizi3 = (int*) calloc(n, sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("1. Dizi Degeri Giriniz:");
		scanf("%d", &dizi1[i]);
		
		printf("2. Dizi Degeri Giriniz:");
		scanf("%d", &dizi2[i]);
		
	}
	
	for(i=0;i<n;i++)
		dizi3[i] = dizi1[i] + dizi2[i];
	
	
	printf("1. Dizi : ");
	for(i=0;i<n;i++)
		printf("%d\t", dizi1[i]);
	
	printf("\n2. Dizi : ");
	for(i=0;i<n;i++)
		printf("%d\t", dizi2[i]);
	
	printf("\n3. Dizi : ");
	for(i=0;i<n;i++)
		printf("%d\t", dizi3[i]);
	
	free(dizi1);
	free(dizi2);
	free(dizi3);
	
	system("pause");
	return 0;
}