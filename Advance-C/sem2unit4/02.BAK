#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main(int argc,char *argv)
{
	FILE *fp;
	char ch;
	int size=0;
	clrscr();
	fp=fopen(argv[1],"r");
	if(fp == NULL)
	{
		printf("\n file unable to open");
	}
	else
	{
		printf("\n file opened");
	}
	fseek(fp,0,2);
	size=ftell(fp);
	printf("\n the size of given file is:%d",size);
	fclose(fp);
	getch();
}