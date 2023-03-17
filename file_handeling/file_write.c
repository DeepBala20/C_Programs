#include<stdio.h>
#include<string.h>

int main()
{

	FILE *fp;
	char ch='D';
	char str[5]="Deep";
	int i;

	fp=fopen("deep.txt","w");

	fputc(ch,fp);

	fputs(str,fp);

	for(i=0;i<=strlen(str);i++)
	{
		fputc(str[i],fp);
	}

	fclose(fp);

	return 0;

}