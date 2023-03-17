#include<stdio.h>
void swap(int *p, int *q);
int main()
{
	int a,b,*p,*q;

	printf("enter a&b\n");
	scanf("%d %d", &a,&b);

	swap(&a,&b);

	printf("a=%d\n",a );
	printf("b=%d\n",b );


}

void swap(int *p, int *q)
{	
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}