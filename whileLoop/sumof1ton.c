#include<stdio.h>
int main()

{
	int i,n,sum=0;
	i=1;
	printf("enter n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		
		i=i+1;

	}
	printf("sum=%d\n", sum );
	return 0;
}