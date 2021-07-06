//Addition of two matrices
#include <stdio.h>
int main()
{
int r, c, a[100][100], b[100][100],sum[100][100], i, j;
printf("Enter the number of rows:\n ");
scanf("%d",&r);
printf("Enter the number of columns:\n");
scanf("%d",&c);
printf("\nEnter the elements of 1st matrix:\n");
for(i=0;i<r;i++)
{
printf("\n");
for(j=0;j<c;j++)
{
printf("Enter element a%d%d:",i+1,j+1);
scanf("%d", &a[i][j]);
}
}
printf("\nEnter the elements of 2nd matrix:\n");
for(i=0;i<r;i++)
{
printf("\n");
for(j=0;j<c;j++)
{
printf("Enter element b%d%d:",i+1,j+1);
scanf("%d",&b[i][j]);
}
}
printf("\nSum of two matrices: \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
sum[i][j]=a[i][j]+b[i][j];
printf("%d\t",sum[i][j]);
}
printf("\n");
}
return 0;
}
