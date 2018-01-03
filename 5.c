#include<stdio.h>
void main()
{
int i,j;
char a[20],b[20];
printf("enter the string\n");
scanf("%s",a);
for(j=0;a[j]!='\0';j++);

for(i=0;i<j;i++)
{
b[i]=a[j-i-1];
}
b[j]='\0';
printf("%s\n",b);
}
