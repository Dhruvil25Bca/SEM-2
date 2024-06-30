#include <stdio.h>
#include <conio.h>
#include <ctype.h>
char* uprstr(char *);
void main()
{
	char *str;
	clrscr();
	printf("\n Enter string=");
	gets(str);
	printf("\n String in Uppercase:%s",uprstr(str));
	getch();
}
char* uprstr(char *str)
{
	int i;
	for(i=0;*(str+i)!='\0';i++)
	{
		if(islower(*(str+i)))
		{
			*(str+i)=*(str+i)-32;
		}
	}
	*(str+i)='\0';
	return str;
	getch();
}