#include<stdio.h>
void main()
{
int i,j,k,n,a[20][20];
printf("\nEnter the order of the matrix:");
scanf("%d",&n);
printf("Enter the elements of matrix\n");
for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		{
		printf("[%d,%d]=",j+1,i+1);
		scanf("%d \n",&a[j][i]);
		}


for(i=0;i<n;i++)
{	for(j=0;j<n;j++)
		{
		printf("  %d  ",a[i][j]);
		}

printf("\n");
}
}
