#include<stdio.h>

int fact(int x);
int main()
{
	int n,i=0,x;
	printf("enter number\n");
	scanf("%d",&n);
	x=fact(n);
	printf("%d",x );

}

int fact(int x)
{
	
	if(x>1)
	{
		return x*fact(x-1);
    }
    else
    {
    	return 1;
    }
}
