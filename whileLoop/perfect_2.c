#include<stdio.h>
int main()
{
	int i=1,n,sum=0,ans=0;

	printf("enter number");
	scanf("%d",&n);

	while(i<=n)
	{
		if(n%i==0)
		{
			sum=sum+i;
			
		}
		i++;
	}
	ans=sum-n;
	if(ans==n)
	{
		printf("perfect");
	}
	else
	{
		printf("not perfect");
	}
	return 0;
}