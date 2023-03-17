#include<stdio.h>
int main()
{
	int n1,n2,i=1,max,lcm=0;
	printf("enter number n1 & n2\n");
	scanf("%d %d",&n1,&n2);
	
	max=(n1>n2)?n1:n2;
	while(i)
	{
		if(max%n1==0 && max%n2==0)
		{
			lcm=max;
			break;
		}
		max++;
	}
	printf("lcm=%d ",lcm);
	
	return 0;
}