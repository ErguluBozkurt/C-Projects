#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Bu kod bir şirket personelinin bilgilerini alarak 60 yaş üstü çalışan sayısı, ortalama aylık,
	en yüksek maaş alan kişi ve en fazla eleamanın çalıştığı bölüm bilgilerini bize vermektedir.
*/
struct factory{
	char name[10];
	char surname[15];
	int age;
	int salary;
	char branch[30];
};

int ages(struct factory b[]);
double average(struct factory a[]);
int main(void) 
{
	struct factory employees[3];
	int i, j, value1, Esalary, enfazlaeleman[3], eneleman;
	double value2;
	char isim[10], soyad[15], bolum[30], enbranch[30];
	for(i=0;i<3;i++)
	{
		printf("Enter name= \nsurname=\n");
		scanf("%s%s", &employees[i].name, &employees[i].surname);
		printf("enter age= \nsalary=\n");
		scanf("%d%d", &employees[i].age, &employees[i].salary);
		printf("Enter branch=\n");
		scanf("%s", &employees[i].branch);
	}
	value1=ages(employees);
	value2=average(employees);
	
	Esalary=employees[0].salary;
	for(i=1;i<3;i++)
	{
		if(employees[i].salary>Esalary)
		{
			Esalary=employees[i].salary;
			strcpy(isim, employees[i].name);
			strcpy(soyad, employees[i].surname);
			strcpy(bolum, employees[i].branch);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			if(strcmp(employees[i].branch, employees[j].branch)==0)
				enfazlaeleman[i] +=1;
		
	}
	
	eneleman=enfazlaeleman[0];
	for(i=1;i<3;i++)
		if(enfazlaeleman[i]>eneleman)
		{
			eneleman=enfazlaeleman[i];
			strcpy(enbranch, employees[i].branch);
		}
	
	
	printf("60 yas ussu calisan sayisi=%d\n", value1);
	printf("Ortalama aylik=%.2lf\n", value2);
	
	printf("En yuksek maas alan kisi=%s %s \n bolum=%s\n", isim, soyad, bolum);
	
	printf("En fazla elemanin calistigi bolum=%s\n ", enbranch);
	
	
	return (0);
}

int ages(struct factory b[])
{
	int i, say=0;
	for(i=0;i<3;i++)
		if(b[i].age>60)
			say = say + 1;
	return(say);
}


double average(struct factory a[])
{
	int i, toplam;
	double orta;
	for(i=0;i<3;i++)
		toplam = toplam + a[i].salary;
	orta=toplam/5;
	return(orta); 
	
}







