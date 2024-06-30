#include <stdio.h>
#include <conio.h>
struct class
{
	int number;
	char name[10];
	float marks;
};
void main()
{
	int x;
	struct class s1={111,"rao",72.50};
	struct class s2={222,"reddy",67.00};
	struct class s3;
	clrscr();
	s3=s2;
	printf("\n s1 number=%d,\n s1 name=%s,\n s1 marks=%f",s1.number,s1.name,s1.marks);
	printf("\n s2 name=%s,\n s2 number=%d,\n s2 marks=%f",s2.name,s2.number,s2.marks);
	x=((s3.number==s2.number)&&(s3.marks==s2.marks))?1:0;
	if(x==1)
	{
		printf("\n s2 and s3 are same\n\n");
		printf("\n %d %s %f",s3.number,s3.name,s3.marks);
	}
	else
	{
		printf("\n s2 and s3 are different\n\n");
	}
   getch();
}