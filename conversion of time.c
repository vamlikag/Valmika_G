//Develop a C program to convert time (in hours and minutes) to minutes using functions.
#include <stdio.h>
int conversion(int hours,int min);
int main()

{
    int h,m,ct;
    printf("Enter the time in hours: ");
    scanf("%d",&h);
    printf("Enter the time in minutes: ");
    scanf("%d",&m);
    ct=conversion(h,m);
    printf("The time in minutes: %d ",ct);
    return 0;
}
int conversion(int hours,int min)
{
    int t,ct;
    t=hours*60;
    ct=t+min;
    return ct;
}
