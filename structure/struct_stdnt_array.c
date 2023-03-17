#include<stdio.h>

struct student
{
	char name[50];
	float percentage;
	int age;
	
};

int main()
{
	struct student s[5];
	int i=0;

	for(i=1;i<6;i++)
	{
		printf("enter student details \n");
		printf("enter name :");
		scanf("%s",s[i].name);
		printf("\n");
		printf("enter percentage : ");
		scanf("%f",&s[i].percentage);
		printf("\n");
		printf("enter age : ");
		scanf("%d",&s[i].age);
		printf("\n");
		printf("\n");
	}

	for(i=1;i<6;i++)
	{
		printf("enter student details \n");
		printf("enter name :");
		printf("%s",s[i].name);
		printf("\n");
		printf("enter percentage : ");
		printf("%f",s[i].percentage);
		printf("\n");
		printf("enter age : ");
		printf("%d",s[i].age);

	}
}