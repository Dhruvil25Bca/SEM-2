#include <stdio.h>
#include <conio.h>
void main()
{
	char str1[10],revstr[10],*stptr=str1,*rvptr=revstr;
	int i=1;
	clrscr();
	printf("\n Enter a string:");
	gets(str1);
	while(*stptr)
	{
		stptr++;
		i++;
	}
	while(i>=0)
	{
		stptr--;
		*rvptr=*stptr;
		rvptr++;
		--i;
	}
	*rvptr='\0';
	printf("\n Reverse of a string is :%s",revstr);
	getch();
}