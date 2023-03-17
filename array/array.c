#include<stdio.h>
int main()
{
	int stu[6],i;
	for(i=0;i<6;i++)
	{
		printf("enter number");
		scanf("%d",&stu[i]);
	}
	for(i=0;i<6;i++)
	{
		printf("%d",stu[i]);
		printf("\n");
	}
	for(i=5;i>=0;i--)
	{
		printf("%d",stu[i]);
		printf("\n");
	}
	return 0;

}