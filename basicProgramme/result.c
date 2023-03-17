#include<stdio.h>
int main()
{
	int a,b,c,d,e,sum,per;
	printf("enter the marks of five subjects\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	sum=a+b+c+d+e;
	per=sum/5;
	if(per<35)
	{
		printf("you are fail");
	}
	if(per>=35 && per<45)
	{
		printf("you are pass");
	}
	if(per>=45 && per<60)
	{
		printf("you are pass with second class");
	}
	if(per>=60 && per<70)
	{
		printf("you are pass with first class");
	}	
	if(per>=70)
	{
		printf("distinction");
	}

	return 0;
}