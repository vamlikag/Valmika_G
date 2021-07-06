// Develop a program to find average of n numbers.
#include<stdio.h>
int main()
{
int a[50],n,i;
float sum=0;float avg;
printf("Enter the number of elements in the array:\n");
scanf("%d",&n);
printf("Enter the elements of the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=(float)(sum/n);
printf("Average = %.2f",avg);
return 0;
}
