#include<stdio.h>
#include<conio.h>
struct h
{
  char name[30];
  char add[20];
  int gra;
  int chr;
  int room;
};
void hotel();
struct h s[]={
{"South Point Hert","Maxico",3,300,167},
{"Hotel Moon Rocket","Los Angels",2,500,150},
{"Tropicana Casion & Resort","Los Vegas",3,100,50},
{"Rajavir Palace & Resort","India",4,100,50},
};
void main()
{
  int i;
  char c;
  clrscr();
  for(i=0;i<=3;++i)
  {
  printf("\n HOTEL NAME:%s",s[i].name);
  printf("\n ADDRESS:%s",s[i].add);
  printf("\n GRADE:%d",s[i].gra);
  printf("\n CHARGES:%d",s[i].chr);
  printf("\n NO.OF ROOM:%d",s[i].room);
  }
  hotel();
  getch(); 
}
  void hotel()
  {
  int i,n=0;
  //char c;
  printf("\n SHOW HOTEL ROOM CHRGES LASE THAN:");
  scanf("%d",&n);
  for(i=0;i<=3;++i)
  {
  if(s[i].chr<n)
  {
  printf("\n %d.HOTEL.NAME:%s",i+1,s[i].name);
  printf("\n ADDRESS:%s",s[i].add);
  printf("\n GRADE:%d",s[i].gra);
  printf("\n CHARGES:%d",s[i].chr);
  printf("\n NO OF ROOM:%d",s[i].room);
  }
  }
}


