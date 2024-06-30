#include <stdio.h>
#include <conio.h>
void calc(int *,int *);
void main()
{
	int no1=40,no2=20;
	clrscr();
	calc(&no1,&no2);
	getch();
}
void calc(int *n1,int *n2)
{
	int sum,sub,mul,div;
	clrscr();
	sum=*n1 + *n2;
	sub=*n1 - *n2;
	mul=*n1 * *n2;
	div=*n1 / *n2;
	printf("Addition= %d\n",sum);
	printf("Subtraction= %d\n",sub);
	printf("multiplication= %d\n",mul);
	printf("division= %d\n",div);
}