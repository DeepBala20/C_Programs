#include<stdio.h>
void min(int x,int y);
int main()
{
	int a,b;
	printf("enter a & b\n");
	scanf("%d %d",&a,&b);
	min(a,b);
	
}

void min(int x,int y)
{
	int min;
	min=(x<y)?(x):(y);;
	printf("min=%d\n",min );
}