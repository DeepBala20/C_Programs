#include<stdio.h>
int main()

{
	int n1,n2;
	printf("enter two numbers");
	scanf("%d %d",&n1,&n2);	
	while(n1<=n2)
	{
		printf("%d\n", n1 );
		n1++;

	}
	return 0;
}