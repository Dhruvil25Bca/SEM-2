#include<stdio.h>
#include<conio.h>
struct in
{
  int cod;
  char name[10];
  int p;
  }s[3];
void intput(struct in up[],int n)
{
   int i;
   for(i=1;i<=n;i++)
   {
   printf("%d ITEM CODE:",i);
   scanf("%d",&up[i].cod);
   printf("ITEM NAME:");
   scanf("%s",up[i].name);
   printf("ITEM PRICE:");
   scanf("%d",&up[i].p);
   }
}
void output(struct in up[],int n)
{
   int i;
   for(i=1;i<=n;i++)
   {
   printf("\n%d ITEM CODE:%d",i,up[i].cod);
   printf("\n ITEM NAME:%s",up[i].name);
   printf("\n ITEM PRICE:%d",up[i].p*10/100+up[i].p);
   }
}
void main()
{
  int i;
  clrscr();
  intput(s,3);
  output(s,3);
  getch();
}
