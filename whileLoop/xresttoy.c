#include<stdio.h>
int main()
{
	int x,y,i=1,ans=1;
	printf("enter x and y");
	scanf("%d %d",&x,&y);

	while(i<=y)
	{
		ans=ans*x;
		i++;
	}
	printf("xY=%d",ans);
	return 0;
}
 