#include <stdio.h>
#include <conio.h>
void comp(char *,char *);
void main()
{
	char *s1,*s2;
	clrscr();
	printf("\n Enter first string:");
	gets(s1);
	printf("\n Enter second string:");
	gets(s2);
	comp(s1,s2);
	getch();
}
void comp(char *s1,char *s2)
{
	int i,flag=0;
	for(i=0;*(s1+i)!='\0' && *(s2+i)!='\0';i++)
	{
		if(*(s1+i)!=*(s2+i))
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("Equal");
	else
	printf("Not Equal");
	getch();
}