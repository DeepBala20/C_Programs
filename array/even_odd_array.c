#include<stdio.h>
int main()
{
	int stu[6],i,even,odd;
	for(i=0;i<6;i++)
	{
		printf("enter number");
		scanf("%d",&stu[i]);
	}
	
	for(i=0;i<6;i++)
	{
		if(stu[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("even = %d\n",even );
	printf("odd = %d\n",odd );
	return 0;

}