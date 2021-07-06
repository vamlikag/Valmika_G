//Develop a program to calculate the sum of squares of first n odd numbers. (using for loop)

#include<stdio.h>
int main()
{
int i,n,sum;
printf("\n Enter the number of n:");
scanf("%d",&n);
sum=0;
for(i=1;i<=n;i++)
{
sum=sum+(i*i);
i++;
}
printf("The sum of squares of first n odd numbers is %d",sum);
return 0;
}
