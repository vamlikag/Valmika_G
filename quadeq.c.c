#include <stdio.h>
#include<math.h>
int main()
{
int a,b,c,det;
float root1,root2;
printf("Enter the coordinates a,b,c : ");
scanf("%d %d %d", &a , &b , &c );
det= (b*b - 4 * a * c) ;
if ( det< 0)
printf("the roots are imaginary");
else if(det==0)
{
root1 = -b/2*a;
printf("the roots are real and equal=%f",root1);
}
else
{
root1=(-b+sqrt(det))/2*a;
root2=(-b-sqrt(det))/2*a;
printf("roots of the equation = %f and %f",root1,root2);
}
return 0;
}
