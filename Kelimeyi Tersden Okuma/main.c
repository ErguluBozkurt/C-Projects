#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Bu kod girilen bir dizgiyi tersden okunuşunu bize gösterir.

int main(void) 
{
	int i, k;
	char dizgi1[30], dizgi2[30];
	printf("Bir dizgi giriniz=");
	gets(dizgi1);
	k=strlen(dizgi1);
	for(i=0; i<=k; i++)
	   strncpy(&dizgi2[i], &dizgi1[k-i-1],1);
	printf("%s", dizgi2);
	
	return 0;
}
