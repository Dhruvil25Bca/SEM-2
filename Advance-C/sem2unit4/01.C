#include <stdio.h>
#include <process.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
	FILE  *fp1, *fp2;
	char a,fname[20];
	printf("\n enter file name:");
	scanf("%s",&fname);
	fp1=fopen(fname,"r");

	if(fp1 == NULL)
	{
		puts("can't open this file");
		exit(1);
	}

fp2=fopen("test1.txt","w");
if(fp2==NULL)
{
puts("not able to open this file");
fclose(fp1);
exit(1);
}

do
{
a=fgetc(fp1);
a=toupper(a);
fputc(a,fp2);
}while(a != EOF);

fcloseall();
getch();
}
