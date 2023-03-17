#include<stdio.h>
int main()
{
	int i=1,n,sum=0,ans=1;
	printf("enter n");
	scanf("%d",&n);

	while(i<=n)
	{
		ans=i*i;
		sum=sum+ans;
		i++;
	}
	printf("sum=%d",sum);
	return 0;
}