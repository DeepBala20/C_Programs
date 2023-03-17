#include<stdio.h>
int main()
{
	int n,i,j,x;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1,x=n;j<=i;j++)
		{
			printf("%d",x);
			x--;
		}
		printf("\n");
	}
	return 0;
}