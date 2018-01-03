#include<stdio.h>
void main()
{
FILE *f1,*f2;
char c,d;
printf("input\n");
f1=fopen("input","w");
while((d=getchar())!=EOF)
{
putc(d,f1);
}
fclose(f1);
f2=fopen("input","r");
while(1)
{
c=getc(f2);
if(c==EOF)
break;
else
printf("%c",c);
}
fclose(f2);
}
