#include <stdio.h>
#include <conio.h>
struct marks
{
	int sub1,sub2,sub3,total;
};
void main()
{
	int i;
	struct marks student[3]={{45,67,81,0},{75,53,69,0},{57,36,71,0}};
	struct marks total;
	clrscr();
	for(i=0;i<=2;i++)
	{
		student[i].total=student[i].sub1+
		student[i].sub2+student[i].sub3;

		total.sub1+=student[i].sub1;
		total.sub2+=student[i].sub2;
		total.sub3+=student[i].sub3;

		total.total+=student[i].total;
	}
	printf("\n student \t total\n\n");
	for(i=0;i<=2;i++)
	{
		printf(" \n student[%d] %d\n",i+1,student[i].total);
	}
	printf("\n subject1=%d\n subject2=%d\n subject3=%d\n",total.sub1,
	total.sub2,total.sub3);

	printf("\n grand total=%d\n",total.total);

	getch();
}