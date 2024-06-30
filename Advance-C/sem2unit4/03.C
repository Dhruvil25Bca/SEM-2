#include<stdio.h>
#include<conio.h>

void main()
{
FILE *fp1=fopen("file1.txt","r");
FILE *fp2=fopen("file2.txt","r");
FILE *fp3=fopen("file3.txt","r");

char c;

if(fp1==NULL || fp2==NULL || fp3==NULL)
{
puts("could not open files");
exit(0);
}

while((c=fgetc(fp1))!=EOF)
fputc(c,fp3);

while((c=fgetc(fp2))!=EOF)
fputc(c,fp3);

printf("merged file.txt and file 2.txt into file3.txt");

fclose(fp1);
fclose(fp2);
fclose(fp3);
getch();

}