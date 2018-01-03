#include<stdio.h>
void main()
{
char c,d;
FILE *f1,*f2,*f3;
f1=fopen("1.c","r");
f2=fopen("4.c","w");
while(1)
{
c=fgetc(f1);
if(c==EOF)
break;
else
{
fputc(c,f2);
}
}
fclose(f1);
fclose(f2);
//seek(f2,0L,0);
f3=fopen("4.c","r");
while(1)
{
d=fgetc(f3);
if(d==EOF)
break;
else
printf("%c",d);
}

fclose(f3);
}
