#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

  int wc(char*file_path,char*word)
  {
  FILE*fp;
  int count=0;
  int ch,len;

  if(NULL==(fp=fopen(file_path,"r")))
  return-1;
  len=strlen(word);
  for(;;)
  {
  int i;
  if(EOF==(ch=fgetc(fp)))break;
  if((char)ch!=*word)continue;

  for(i=1;i<len;++i){
  if(EOF==(ch=fgetc(fp)))
  goto end;

  if((char)ch!=word[i]){
  fseek(fp,1-i,SEEK_CUR);
  goto next;
}
}
++count;
next:;
}
end:;

fclose(fp);
return count;
}

int main()
{
char key[20];
int wordcount=0;
clrscr();
printf("enter the word to be searched:\n ");
scanf("%s",&key);
wordcount=wc("input.txt",key);
printf("\n the word occurs %d times in the input.txtfile",wordcount);
getch();
return 0;
}