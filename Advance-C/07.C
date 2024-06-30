#include <stdio.h>
#include <conio.h>
struct marks
{
	int sub[3];
	int total;
};
void main()
{
	int i,j;
	struct marks student[3]={45,67,81,0,75,53,69,0,57,36,71,0};
	struct marks total;
	clrscr();
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			student[i].total+=student[i].sub[j];
			total.sub[j]+=student[i].sub[j];
		}
		total.total+=student[i].total;
	}
	printf("\n student \t total\n\n");
	for(i=0;i<=2;i++)
	{
		printf(" \n student[%d] %d\n",i+1,student[i].total);
	}
		printf("\n subject \t total\n\n");
	for(j=0;j<=2;j++)
	{
		printf(" \n subject[%d] %d\n",j+1,total.sub[j]);
	}
	printf("\n grand total=%d\n",total.total);
	getch();
}