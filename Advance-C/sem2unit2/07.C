#include <stdio.h>
#include <conio.h>
struct student
{
	int rollno,marks;
	char name[15],grade;
}stu[5];
void main()
{
	int i;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("\n Enter name of student %d=",i);
		scanf("%s",&stu[i].name);
		printf("\n Enter rollno of student %d=",i);
		scanf("%d",&stu[i].rollno);
		printf("\n Enter marks(in percentage) of student %d=",i);
		scanf("%d",&stu[i].marks);
		printf("\n");
	}
	for(i=1;i<=5;i++)
	{
		if(stu[i].marks<35)
		{
			stu[i].grade='F';
		}
		else if(stu[i].marks >=35 && stu[i].marks < 50)
		{
			stu[i].grade='D';
		}
		else if(stu[i].marks >=50 && stu[i].marks < 60)
		{
			stu[i].grade='C';
		}
		else if(stu[i].marks >=60 && stu[i].marks < 75)
		{
			stu[i].grade='B';
		}
		else if(stu[i].marks >=75)
		{
			stu[i].grade='A';
		}
	}
	printf("Rollno\tName\tMarks\tGrade\n");
	for(i=1;i<=30;i++)
	{
		printf("=");
	}
	printf("\n");
	for(i=1;i<=5;i++)
	{
		printf("%d\t%s\t%d\t%c\n",stu[i].rollno,stu[i].name,
		stu[i].marks,stu[i].grade);
	}
	for(i=1;i<=30;i++)
	{
		printf("_");
	}
	printf("\n");
	getch();
}