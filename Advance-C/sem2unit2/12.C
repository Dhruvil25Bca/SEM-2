#include <stdio.h>
#include <conio.h>
void main()
{
	int n[5],*m,i;
	clrscr();
	printf("\n Enter first array elements:");
	for(i=0;i<=4;i++)
	{
		printf("\n Enter element[%d]:",i+1);
		scanf("%d",&n[i]);
		*(m+i)=n[i];
	}
	printf("\n Elements of second array:");
	for(i=0;i<=4;i++)
	{
		printf("%d",*(m+i));
	}
	getch();
}