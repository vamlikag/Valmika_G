//Develop a C program to determine the month given input in the range 1-12 using switch case statement.
#include<stdio.h>
int main()
{
    int month;
    printf("Enter any number from 1 to 12 :");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        printf("\n The month is January");
        break;
        case 2:
        printf("\n The month is February");
        break;
        case 3:
        printf("\n The month isMarch");
        break;
        case 4:
        printf("\n The month is April");
        break;
        case 5:
        printf("\n The month isMay");
        break;
        case 6:
        printf("\n The month is June");
        break;
        case 7:
        printf("\n The month is July");
        break;
        case 8:
        printf("\n The month is August");
        break;
        case 9:
        printf("\n The month is September");
        break;
        case 10:
        printf("\n The month is October");
        break;
        case 11:
        printf("\n The month is November");
        break;
        case 12:
        printf("\n The month is December");
        break;
        default:
        printf("\n The number is invalid");
    }
    return 0;
}
