#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
	FILE *read_data;
	FILE *write_data;
	int score;
	char name[15], result[10];
	
	write_data = fopen("ogrenci_not.docx", "w");
	fputs("Ahmet 60\n", write_data);
	fputs("Mehmet 70\n", write_data);
	fputs("Eda 40\n", write_data);
	fputs("Hakan 30\n", write_data);
	fputs("Melisa 5\n", write_data);
	fputs("Elif 63\n", write_data);
	fclose(write_data);
	
	write_data = fopen("ogrenci_durum.docx", "w");
	read_data = fopen("ogrenci_not.docx", "r");
	while(fscanf(read_data, "%s %d\n", &name, &score) != EOF)
	{
		if(score >= 60)
			fprintf(write_data, "%s Gecti\n", name);
		else
			fprintf(write_data, "%s Kaldi\n", name);
			
	}
	fclose(write_data);
	fclose(read_data);
	
	read_data = fopen("ogrenci_durum.docx", "r");
	while(fscanf(read_data, "%s %s\n", &name, &result) != EOF)
		printf("%s : %s\n", name, result);
	
	
	system("PAUSE");
	return 0;
}