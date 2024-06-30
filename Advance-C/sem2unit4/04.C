#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *fp;
 int no,i;
 clrscr();
 fp=fopen("digit.txt","w");

 for(i=1;i<=10;i++)
 {
 putw(i,fp);
 }
 fclose(fp);
 fp=fopen("digit.txt","r");

 while((no=getw(fp))!=EOF)
 {
 printf("%d-",no);
 }
 getch();
 }