#include<stdio.h>
int main()
{
	int n,i=1,even=0,odd=0,sum;
	printf("enter n");
	scanf("%d",&n);

	while(i<=n)
	{
		if(i%2==0)
		{
			even=even+i;
		}
		else
		{
			odd=odd+i;
		}
		i++;
	}
	sum=odd-even;
	printf("sum=%d",sum);
	return 0;
}