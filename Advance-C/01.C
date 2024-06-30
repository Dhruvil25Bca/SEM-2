#include <stdio.h>
#include <conio.h>
void sum(int,int);
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter value of a&b=");
	scanf("%d %d",&a,&b);
	sum(a,b);
	getch();
}
void sum(int x,int y)
{
	int ans;
	ans=x+y;
	printf("\n ans is %d",ans);

}