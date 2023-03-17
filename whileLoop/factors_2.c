#include<stdio.h>
int main()
{
	int i=1,n,ans=1;
	printf("enter n");
	scanf("%d",&n);

	while(i<=n)
	{
		if(n%i==0)
		{
			printf("factor=%d",i);
		}
		i++;

	}
	return 0;
}