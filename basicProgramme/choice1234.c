#include<stdio.h>
int main()
{
	int a,b,ans,choice;
	printf("enter number a & b \n");
	scanf("%d %d",&a,&b);
	printf("enter choice (1=add),(2=sub),(3=multi),(4=div)");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1 : ans=a+b; break;
		case 2 : ans=a-b; break;
		case 3 : ans=a*b; break;
		case 4 : ans=a/b; break;
	}
	printf("your ans is %d",ans);
		return 0 ;
}