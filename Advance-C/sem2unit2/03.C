#include <stdio.h>
#include <conio.h>
int strl(char *);
void main()
{
	char str[20];
	int len;
	clrscr();
	printf("Enter any string=\n");
	gets(str);
	len=strl(str);
	printf("the length of the given string %s is =%d",str,len);
	getch();
}
int strl(char*p)
{
	int count = 0;
	while(*p !='\0')
	{
		count++;
		p++;
	}
	return count;
}