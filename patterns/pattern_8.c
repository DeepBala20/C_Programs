#include<stdio.h>
int main()
{
	int i,j,n,count=1;
	char alpha='A';
	printf("entre n\n");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			(i%2==0) ? (printf("%c",alpha++)) : (printf("%d",count++)) ;
			
		}
		printf("\n");
	}
	return 0;
}