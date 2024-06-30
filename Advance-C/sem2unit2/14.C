#include <stdio.h>
#include <conio.h>
void cpy(char *,char *);
void main()
{
	char *s1,*s2;
	clrscr();
	printf("\n Enter first string:");
	gets(s1);
	cpy(s1,s2);
	getch();
}
void cpy(char *s1,char *s2)
{
	int i;
	for(i=0;*(s1+i)!='\0';i++)
	{
		*(s2+i)=*(s1+i);
	}
	*(s2+i)='\0';
	printf("\n Copied string is :%s",s2);
	getch();
}