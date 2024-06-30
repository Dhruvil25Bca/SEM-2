#include <stdio.h>
#include <conio.h>
int(*funptr)(int,int);
int add(int x,int y)
{
	return x+y;
}
void main()
{
	int sum;
	clrscr();
	funptr=add;
	sum=funptr(15,15);
	printf("Sum=%d\n",sum);
	getch();
}