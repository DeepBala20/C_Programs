#include<stdio.h>
#include<string.h>

int main()
{

	FILE *fp;
	char ch;
	char str[5]="Bala";
	int i;
	fp=fopen("deep.txt","a");

	fputs(str,fp);

	for(i=0;i<=strlen(str);i++)
	{
		fputc(str[i],fp);
	}

	fclose(fp);

	
	return 0;

}