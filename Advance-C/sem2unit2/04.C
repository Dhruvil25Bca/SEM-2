#include <stdio.h>
#include <conio.h>
void upper(char *s);
void upper(char *s)
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=97 && s[i]<=122)
		{
			s[i]-=32;
		}
	}
}
void main()
{
	char s[100];
	clrscr();
	printf("\n Enter the string=");
	gets(s);
	printf("string in lowercase=%s\n",s);
	upper(s);
	printf("String in uppercase=%s\n",s);
	getch();
}