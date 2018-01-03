#include<stdio.h>
void main()
{

char a[20];
int i;
printf("Enter the string\n");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>95 && a[i]<122)
a[i]=a[i]-32;
else
a[i]=a[i]+32;
}
printf("the final string is:\n");
printf("%s",a);
}
