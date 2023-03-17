#include<stdio.h>
int main()
{
	int a[5],i,b[5];
	int *p;
	printf("enter array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=&a;
	printf("copy array elements through pointer");
	for(i=0;i<5;i++)
	{
		b[i]=*p;
		p++;
	}
	for(i=0;i<5;i++)
	{
		printf("%d",b[i]);
	}

}