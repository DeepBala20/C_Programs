#include<stdio.h>
float s_i(int x,int y,int z);
int main()
{
	int p,r,n;
	float x;
	printf("enter p , r & n\n");
	scanf("%d %d %d",&p,&r,&n);
	x=s_i(p,r,n);
	printf("s_i=%f\n",x );
}

float s_i(int x,int y,int z)
{
	float ans;
	ans=(x*y*z)/100.0;
	return ans;

}