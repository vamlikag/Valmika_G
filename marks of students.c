//Demonstrate reading a two-dimensional array of marks which stores marks of 4 students in 3 subjects and display the highest marks in each subject

#include<stdio.h>
int main()
{
int i,j,r,c;
printf("Enter the number of students and subjects:\n");
scanf("%d%d",&r,&c);
int a[100][100],s[100];
printf("Enter data:\n");
for(i=0;i<r;i++)
{
printf("\n");
for(j=0;j<c;j++)
{
printf("Student [%d] marks in subject [%d]:",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
for(j=0;j<c;j++)
{
s[j]=a[0][j];
for(i=0;i<r;i++)
{
if(s[j]<a[i][j])
s[j]=a[i][j];
}
}
for(i=0;i<c;i++)
{
printf("\n");
printf("Highest in subject[%d] is %d",i+1,s[i]);
}
printf("\n");
return 0;
}
