#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define BUFFER_SIZE 1000

void readFile(FILE * fptr);
int main()
{
FILE *fptr;
char filePath[100];
char dataToAppend[BUFFER_SIZE];
printf("enter file path:");
scanf("%s",filePath);
fptr=fopen(filePath,"a");
  if(fptr == NULL)
  {
  printf("\n unable to open file.\n");
  printf("\n please check whather file exist and you have a write privillage \n");
   exit(EXIT_FAILURE);
   }
   printf("\n enter data to append:");
   fflush(stdin);
   fgets(dataToAppend,BUFFER_SIZE,stdin);
   fputs(dataToAppend,fptr);
   fptr=freopen(filePath,"r",fptr);
   printf("\n succesfully appended data to file.\n");
   printf("changed the file contened:\n \n");
   readFile(fptr);

   fclose(fptr);
   return 0;
   }
   void readFile(FILE * fptr)
   {
   char ch;
   do
   {
   ch=fgetc(fptr);
   putchar(ch);
   }while(ch!=EOF);
   getch();
   }