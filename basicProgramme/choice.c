#include<stdio.h>
int main()
{
	int a,b,choice,ans;
	printf("enter a & b\n");
	scanf("%d %d",&a,&b);
	printf("enter choice (1 for add,2 for sub,3 for multi,4 for div");	
	scanf("%d",&choice);
	if(choice==1)
	{
		ans=a+b;
	}
	else if(choice==2)
	{
		ans=a-b;
	}
	else if(choice==3)
	{
		ans=a*b;
	}
	else if(choice==4)
	{
		ans=a/b;
	}
	else
	{
		printf("enter valid choice");
	}
	printf("your ans is = %d",ans);
	return 0;
}