#include <stdio.h>
#include <conio.h>
int strl(char *);
void rev(char *);
void main()
{
	char s[100];
	clrscr();
	printf("\n Enter a string=");
	gets(s);
	rev(s);
	printf("\n Reverse string=%s",s);
	getch();
}
void rev(char *s)
{
	int len,i;
	char *sptr,*eptr,t;
	len=strl(s);
	sptr=s;
	eptr=s;
	for(i=0;i<len-1;i++)
	{
		eptr++;
	}
	for(i=0;i<len/2;i++)
	{
		t=*eptr;
		*eptr=*sptr;
		*sptr=t;
		sptr++;
		eptr--;
	}

}
int strl(char *lptr)
{
	int i=0;
	while(*(lptr+i)!='\0')
	{
	i++;
	}
	return i;
}
