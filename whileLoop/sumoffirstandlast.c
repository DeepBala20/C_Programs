#include<stdio.h>
int main()
{
	int i=1,n,sum=0,ld=0,fd=0;

	printf("enter number");
	scanf("%d",&n);

	ld=n%10;

	while(n>=10)
	{
		n=n/10;
	}
	fd=n;
	sum=ld+fd;
	printf("%d",sum	);
	return 0;
}