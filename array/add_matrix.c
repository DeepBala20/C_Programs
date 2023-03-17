#include<stdio.h>
int main ()
{
	int i,j,num1[3][3],num2[3][3];
	printf("A=")
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	printf("\n");
	printf("B=");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	
	printf("\n");
	printf("sum=");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum=num1[i][j]+num2[i][j];
			printf("%d ",sum );

		}
		printf("\n");
	}




	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %d ",num[i][j]);
		}
		printf("\n");
	}
}