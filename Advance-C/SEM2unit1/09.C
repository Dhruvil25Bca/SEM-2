#include <stdio.h>
#include <conio.h>
struct emp
{
	char name[10];
	int p;
	int d1;
	int hr;
	int ns;
}employee[5];
void input(struct emp up[],int n)
{
	 int i;
	 for(i=0;i<n;++i)
	{
		printf("\n Employee Name:");
		scanf("%s",up[i].name);
		printf("\n Basic Pay:");
		scanf("%d",&up[i].p);
		printf("\n Dearness Allowance:");
		scanf("%d",&up[i].d1);
		printf("\n House Rent:");
		scanf("%d",&up[i].hr);
		printf("Net Salary:");
		scanf("%d",&up[i].ns);
	}
}
void output(struct emp up[],int n)
{
	int i,j,k;
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(up[i].ns<up[j].ns)
			{
				k=up[i].ns;
				up[i].ns=up[j].ns;
				up[j].ns=k;
			}
		}
	}
	for(i=0;i<n;++i)
	{
		printf("\n\n Employee Name:%s,",up[i].name);
		printf(" Basic Pay:%d,",up[i].p);
		printf(" Dearness Allowance:%d,",up[i].d1);
		printf(" House Rent:%d,",up[i].hr);
		printf(" Net Salary:%d",up[i].ns);
	}
}
void main()
{
	int i;
	clrscr();
	input(employee,3);
	output(employee,3);
	getch();
}