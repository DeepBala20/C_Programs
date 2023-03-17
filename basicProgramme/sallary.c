#include<stdio.h>
int main()
{
	int bs,gs,hra,da;
	printf(" enter basic sallary");
	scanf("%d",&bs);
	if(bs>=10000 && bs<20000)
	{
		hra=(20*bs)/100;
		da=(80*bs)/100;
	}	
	if(bs>=20000 && bs<30000)
	{
		hra=(25*bs)/100;
		da=(90*bs)/100;
	}
	if(bs>=30000)
	{
		hra=(30*bs)/100;
		da=(95*bs)/100;
	}
	gs=bs+hra+da;
	printf("gross sallary is %d",gs);		
	return 0;
}