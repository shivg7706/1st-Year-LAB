#include<stdio.h>
void main()
{
char c;
FILE *f1;
f1=fopen("1.c","r");
while(1)
{
c=fgetc(f1);
if(c==EOF)
break;
else
{
printf("%c",c);
}
}
fclose(f1);
}

