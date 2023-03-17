#include<stdio.h>
int main()
{
	int n1,n2,i=1,min,gcd;
	printf("enter number n1 & n2\n");
	scanf("%d %d",&n1,&n2);
	
	min=(n1<n2)?n1:n2;
	while(min>0)
	{
		if(n1%min==0 && n2%min==0)
		{
			gcd=min;
			break;
		}
		min--;
	}
	printf("gcd=%d ",gcd);
	
	return 0;
}