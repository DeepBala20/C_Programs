#include<stdio.h>
int main()
{
	int i=1,n,ans;
	printf("enter n");
	scanf("%d",&n);

	while(i<=10)
	{
		ans=n*i;
		printf("%d*%d=%d",n,i,ans);
		i++;
	}
	return 0;

}