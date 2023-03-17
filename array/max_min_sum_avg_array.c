#include<stdio.h>
int main()
{
	int stu[6],i,max=0,min=0,sum=0,avg=0,count=0;
	for(i=0;i<6;i++)
	{
		printf("enter number");
		scanf("%d",&stu[i]);
	}
	max=stu[0];
	min=stu[0];
	
	for(i=0;i<6;i++)
	{
		if(max<stu[i])
		{
			max=stu[i];
		}
		if(min>stu[i])
		{
			min=stu[i];
		}
		sum=sum+stu[i];
		count++;	
	}
	avg=sum/count;
	printf("max = %d\n",max );
	printf("min = %d\n",min );
	printf("sum = %d\n",sum );
	printf("avg = %d\n",avg );
	return 0;

}