#include<stdio.h>
int main()
{
	int stu[6],i,positive,negative,zero;
	for(i=0;i<6;i++)
	{
		printf("enter number");
		scanf("%d",&stu[i]);
	}
	
	for(i=0;i<6;i++)
	{
		if(stu[i]>0)
		{
			positive++;
		}
		else if(stu[i]<0)
		{
			negative++;
		}
		else
		{
			zero++;
		}
	}
	printf("positive = %d\n",positive );
	printf("negative = %d\n",negative );
	printf("zero = %d\n",zero );
	return 0;

}