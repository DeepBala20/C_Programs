#include<stdio.h>
float max();
int main()
{
	float x;
	x=max();
	printf("max=%f\n",x );
}
float max()
{
	float a,b,c,max;
	scanf("%f %f %f",&a,&b,&c);
	max=(a>b)?((a>c)?(a):(c)):((b>c)?(b):(c));
	return max;
}