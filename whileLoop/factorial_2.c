#include<stdio.h>
int main()
{
	int i=1,n,factorial=1;
	printf("enter n");
	scanf("%d",&n);

	while(i<=n)
	{
		factorial=factorial*i;
		i++;
	}
	printf("factorial=%d",factorial);
	return 0;

}