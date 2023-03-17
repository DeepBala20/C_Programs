#include<stdio.h>
int main()
{
	int n1,n2;
	printf("enter numbers \n");
	scanf("%d %d",&n1,&n2);
	while(n1<=n2)
	{
		if(n1%2==0)
		{
			printf("%d",n1);
		}
		n1++;
	}
}
