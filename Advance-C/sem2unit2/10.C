#include <stdio.h>
#include <conio.h>
void main()
{
	int *a,i,j,t,n;
	clrscr();
	printf("\n Enter num of elements in a array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter element[%d]:",i+1);
		scanf("%d",a+i);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(a+i)>*(a+j))
			{
				t=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=t;
			}
		}
	}
	printf("\n Array after sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d",*(a+i));
	}
	getch();
}