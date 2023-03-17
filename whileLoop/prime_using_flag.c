#include<stdio.h>
int main()
{
	int n,i=2,flag=0;
	printf("enter number\n");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			flag++;
			break;
		}
		i++;
	}
	if(flag==1)
	{
		printf("number is prime");
	}
	else
	{
		printf("number is not prime ");
	}
	return 0;
}