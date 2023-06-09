#include <stdio.h>
#include <stdlib.h>

// Bu kod "*" kullanarak desen yapmaktadır.
int main(void) 
{
	int i, j;
	for(i=1 ; i<=6; i++)
	
	{	if(i==1)
	      printf("     ");
			     else if(i==2)
			            printf("    ");
			                  else if(i==3)
			                         printf("   ");
			                              else if(i==4)
			                                     printf("  ");
			                                            else if(i==5)
			                                                    printf(" ");
		for(j=3; j>=1; j--) 	     
			printf("*");
		printf("\n");
	}
	system("PAUSE");
	return 0;
}
