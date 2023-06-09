#include <stdio.h>
#include <stdlib.h>

// Bu kod fibonacci sayılarının ilk 20 terimini bulmaktadır.
int main(void) 
{
	int i, t, y ;
	t=1;
	y=1;
	i=1;
	while(i<=20)
	{
		t=t+y;
		printf("%d\t", t);
		y=t-y;
		i=i+1;
	}
	
	system("PAUSE");
	return 0;
	
}
