#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) 
{
	char harf[]="_ABCDEFGHIJKLMNOPRSTUVYZ";
	int dizi[][5]={{1,3,2,4,3},{2,3,4,5,2},{2,4,5,1,2}};
	int i, j, k, n, t=0;
	int *dizi2, *dizi3;
	char girdi[30];
	printf("dizgiyi girin=");
	gets(girdi);
	k=strlen(girdi);
	dizi2=(int*) calloc(k,sizeof(int));
	dizi3=(int*) calloc(k,sizeof(int));
	for(i=0;i<k;i++)
	{
		for(j=0;j<23;j++)
			if(girdi[i]==harf[j])
			{
				dizi2[t]=j;
				t=t+1;
			}
		
	}
	for(n=0;n<t;n++)
		printf("%d\t", dizi2[n]);
	printf("\n---------------\n");
	t=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5 && t<k;j++)
		{
			dizi3[t]=dizi[i][j]*dizi2[t];
			t=t+1;
		}
	}
	for(n=0;n<t;n++)
		printf("%d\t", dizi3[n]);
	system("PAUSE");
	return (0);
}
