//copy structure
#include <stdio.h>
#include <conio.h>
struct emp
{
	int empno;
	char ename[20];
	float salry;
};
void main()
{
	struct emp e1,e2;
	clrscr();
	printf("\n enter employee no=");
	scanf("%d",&e1.empno);
	printf("\n enter employee name=");
	scanf("%s",e1.ename);
	printf("\n enter employee salry=");
	scanf("%f",&e1.salry);

	printf("\n employee no=%d,\n employee name=%s,\n employee salry=%f",
	e1.empno,e1.ename,e1.salry);

	e2.empno=e1.empno;
	e2=e1;
	e2.salry=e1.salry;

	printf("\n employee no=%d,\n employee name=%s,\n employee salry=%f",
	e2.empno,e2.ename,e2.salry);
	getch();
}