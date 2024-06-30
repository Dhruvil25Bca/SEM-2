#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *fp;
  char ch;
  int i,pos;
  clrscr();
  fp=fopen("input.txt","r");
  if(fp==NULL)
  {
  printf("file does not exist");
  }
  fseek(fp,0,SEEK_END);
  pos=ftell(fp);
  i=0;
  while(i<pos)
  {
  i++;
  fseek(fp,-i,SEEK_END);
 // printf("%c",fgetc(fp));
  ch=fgetc(fp);
  printf("%c",ch);

  }
  getch();

  }
